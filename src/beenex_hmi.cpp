#include "project.h"

void BEENEXT_HMI::send(String key, bool state) {
  BeeNeXT.send(key, state);
}

void BEENEXT_HMI::send(String key, int num) {
  BeeNeXT.send(key, num);
}

void BEENEXT_HMI::send(String key, float f) {
  BeeNeXT.send(key, f);
}

void BEENEXT_HMI::send(String key, String str) {
  BeeNeXT.send(key, str);
}

void BEENEXT_HMI::send(String key, const char* str) {
  BeeNeXT.send(key, str);
}

