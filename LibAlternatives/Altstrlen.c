#include "AltLib.h"

int altlen(char *start){
    int length = 0;
    while(*start != '\0'){
        length++;
        start++;
    }
    return length;
}