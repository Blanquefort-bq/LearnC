#include "AltLib.h"

char *altcat(char *destination, const char *source, const char spacer){
    char *point = destination+altlen(destination);
    *point++ = spacer;
    while(*source){
        *point++ = *source++;
    }
    *point = '\0';
    return destination;
}