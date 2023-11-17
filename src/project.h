#ifndef __PROJECT_H___
#define __PROJECT_H___

#include <BlynkGOv3.h>

namespace GRAPHIC {
  void design();
  void temp(float temp);
  void humid(float humid);
}

namespace IOT{
  void init();
  void temp(float temp);
  void humid(float humid);
}

namespace BEENEXT_HMI {
  inline void send(String key, bool state)                        { BeeNeXT.send(key, state);           }
  inline void send(String key, int num)                           { BeeNeXT.send(key, num);             }
  inline void send(String key, float f)                           { BeeNeXT.send(key, f);               }
  inline void send(String key, String str)                        { BeeNeXT.send(key, str);             }
  inline void send(String key, const char* str)                   { BeeNeXT.send(key, str);             }
  inline void send(String key, uint8_t* data, size_t data_len)    { BeeNeXT.send(key, data, data_len);  }
}

#ifdef BEENEXT
namespace SD_CARD {
  void listDir(const char* dirname,  uint8_t levels=0);
  bool log(const char* filename, String line_log);
}
#endif // ifdef BEENEXT


#endif

