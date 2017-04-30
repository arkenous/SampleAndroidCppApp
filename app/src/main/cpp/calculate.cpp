#include "calculate.hpp"
#include <android/log.h>

Calculate::Calculate() {}

int Calculate::calc(int initial_value) {
  __android_log_print(ANDROID_LOG_INFO, "calculate", "method calc called, initial_value: %d", initial_value);
  int result_value = initial_value;

  for (int i = 0; i < LOOP; ++i) {
    ++result_value;
  }

  return result_value;
}