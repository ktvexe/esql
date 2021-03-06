#ifndef eagle_EagleDbConsole_h
#define eagle_EagleDbConsole_h

#include "Eagle.h"
#include <stdint.h>

/**
 Console instance.
 */
typedef struct {
    /**
     The absolute time when the console was started.
     */
    EAGLE_ATTR_NA uint64_t startTime;
} EagleDbConsole;

/**
 * Create a new console.
 * @return New console instance.
 */
EagleDbConsole *EagleDbConsole_New(void);

/**
 Begin the console input.
 @param [in] console Console instance.
 */
void EagleDbConsole_run(EagleDbConsole *console);

/**
 Free the console.
 @param [in] console Console instance.
 */
void EagleDbConsole_Delete(EagleDbConsole *console);

/**
 * Read a line from the user.
 * @return The line input from the user.
 */
char* EagleDbConsole_GetLine(void);

#endif
