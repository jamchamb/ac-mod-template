#ifndef ACLIB_H
#define ACLIB_H

#include <stddef.h>
#include <stdint.h>

// standard C function prototypes are pulled from devkitpro header files

// GameCube functions
extern void OSReport(char*, ...);
extern int64_t OSGetTime();

extern void JUTReport(int, int, int, char const *, ...);
extern void JUTReportConsole(char*);
extern void JUTReportConsole_f(char*, ...);

extern void ICInvalidateRange(void* start, uint32_t size);
extern void DCInvalidateRange(void* start, uint32_t size);

// Animal Crossing functions

#endif
