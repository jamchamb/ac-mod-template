#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include "aclib.h"

void __entry() {
  OSReport("hello world! the number of the day is %u", 1337);
  return;
}
