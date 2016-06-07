#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "EagleUtils.h"
#include "EagleMemory.h"
#include <time.h>

uint64_t EagleUtils_GetAbsoluteTime(void)
{
    struct timespec tp;
    if (clock_gettime(CLOCK_REALTIME, &tp) < 0)
        return -1;
    return tp.tv_sec * 1000 * 1000 * 1000 + tp.tv_nsec;
}

char* EagleUtils_ToLowerCaseCopy(const char *str)
{
    unsigned long len;
    char *r;

    if (!str) return NULL;

    len = strlen(str) + 1;
    r = (char *) EagleMemory_Allocate("EagleUtils_ToLowerCaseCopy.1", len);
    if (!r) return NULL;

    memmove(r, str, len);
    EagleUtils_ToLowerCase(r);
    return r;
}

void EagleUtils_ToLowerCase(char *str)
{
    for (unsigned long i = 0; i < strlen(str); ++i)
        str[i] = (char) tolower(str[i]);
}

EagleBoolean EagleUtils_CompareWithoutCase(const char *s1, const char *s2)
{
    if (!s1 || !s2)
        return (!s1 && !s2);

    /* the strings are different lengths, so also don't bother comparing them */
    size_t s1len = strlen(s1);
    if (strlen(s2) != s1len)
        return EagleFalse;

    /* check each character */
    for (size_t i = 0; i < s1len; ++i) {
        if (tolower(s1[i]) != tolower(s2[i]))
            return EagleFalse;
    }

    /* the strings must be equal */
    return EagleTrue;
}
