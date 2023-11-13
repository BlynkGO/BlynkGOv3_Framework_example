#include "project.h"
#include <SD.h>

#ifdef BEENEXT

void SD_LOG::listDir(const char* dirname,  uint8_t levels) {
  Serial.printf("[SD] listing directory: %s\n", dirname);
  File root = SD.open(dirname);
  if (!root) {
    Serial.println("[SD] error : Failed to open directory");
    return;
  }
  if (!root.isDirectory()) {
    Serial.println("[SD] error : Not a directory");
    return;
  }

  File file = root.openNextFile();
  while (file) {
    if (file.isDirectory()) {
      Serial.print("  DIR : ");
      Serial.println(file.name());
      if (levels) {
        listDir(file.path(), levels - 1);
      }
    } else {
      Serial.print("  FILE: ");
      Serial.print(file.name());
      Serial.print("  SIZE: ");
      Serial.println(file.size());
    }
    file = root.openNextFile();
  }
}

bool SD_LOG::log(const char* filename, String line_log) {
  File file;
  if (SD.exists(filename)) {
    file = SD.open(filename, FILE_WRITE);
  } else {
    file = SD.open(filename, FILE_APPEND);
  }
  if (!file) {
    Serial.println("[SD] error : Failed to open filename to write");
    return false;
  }

  file.println(line_log);
  file.close();
  return true;
}

#endif //#ifdef BEENEXT
