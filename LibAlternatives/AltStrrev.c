#include <stdio.h>


int altlen(char *str){
    int len = 0;
    while(*str){
        len++;
        str++;
    }
    return len;
}


void altrev(char *str){

    int len = altlen(str);
    char temp;
    for(int i =0; i<len/2;i++){
        temp = *(str+i);
        *(str+i) = *(str+len-1-i);
        *(str+len-1-i) = temp;
    }
}

int main(void){
    char StrToRev[] = "String to reverse";

    printf("before: %s\n",StrToRev);
    altrev(StrToRev);
    printf("after: %s\n", StrToRev);
}