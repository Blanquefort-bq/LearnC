#include "AltLib.h"

char *altchr(char *str, const int ch){

    while(*str != '\0'){
        if(*str == ch){
            break;
        }
        str++; 
    }
    return str;
}