#include <stdio.h>
#include <string.h>

char Str1[40] = "Let's";
char Str2[40] = "bind!";

int altlen(char *start){
    int length = 0;
    while(*start != '\0'){
        length++;
        *start++;
    }
    return length;
}



char *altcat(char *destination, const char *source, const char spacer){
    char *point = destination+altlen(destination);
    *point++ = spacer;
    while(*source){
        *point++ = *source++;
    }
    *point = '\0';
    return destination;
}



int main(void){
    altcat(Str1,Str2,' ');
   puts(Str1);
    return 0;
}