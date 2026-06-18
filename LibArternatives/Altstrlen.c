#include <stdio.h>


int altlen(char *start){
    int length = 0;
    while(*start != '\0'){
        length++;
        *start++;
    }
    return length;
}

int main(void){
    char String[20] = "String";
    int a = altlen(String);
    printf("długość napisu: %d", a);
    return 0;
}