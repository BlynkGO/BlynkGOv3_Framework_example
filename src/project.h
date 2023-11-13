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
  void send(String key, bool state) ;
  void send(String key, int num);
  void send(String key, float f);
  void send(String key, String str);
  void send(String key, const char* str) ;
}


