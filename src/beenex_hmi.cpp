#include "project.h"

inline void BEENEXT_HMI::send(String key, bool state) {
  BeeNeXT.send(key, state);
}

inline void BEENEXT_HMI::send(String key, int num) {
  BeeNeXT.send(key, num);
}

inline void BEENEXT_HMI::send(String key, float f) {
  BeeNeXT.send(key, f);
}

inline void BEENEXT_HMI::send(String key, String str) {
  BeeNeXT.send(key, str);
}

inline void BEENEXT_HMI::send(String key, const char* str) {
  BeeNeXT.send(key, str);
}

