#include "AltLib.h"
#include <stdio.h>

char Str1[40] = "Let's";
char Str2[40] = "bind!";


char s1[] = "StringWithinString";
char s2[] = "Within";


int main(void){
    
    altcat(Str1,Str2,' ');
    puts(Str1);

    printf("%s\n", altchr("Searching",'c'));//character
    printf("%p\n",(void*)altchr("Searching",'c'));

    char String[20] = "String";
    int a = altlen(String);
    printf("długość napisu: %d", a);

    char StrToRev[] = "String to reverse";
    printf("before: %s\n",StrToRev);
    altrev(StrToRev);
    printf("after: %s\n", StrToRev);

    printf("%p\n",(void*)Altstr(s1, s2));


    return 0;
}