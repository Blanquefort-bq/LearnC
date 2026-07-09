#include <stdio.h>
#include <string.h>

char *altchr(char *str, const int ch){

    while(*str != '\0'){
        if(*str == ch){
            break;
        }
        str++; 
    }
    return str;
}


int main(void){
    
    printf("%s\n", altchr("Searching",'c'));//character
    printf("%p\n",(void*)altchr("Searching",'c'));

    return 0;
}