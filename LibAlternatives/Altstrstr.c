#include <stdio.h>


char s1[] = "StringWithinString";
char s2[] = "Within";

char *Altstr(char *Container, char *Contained){
    int times = 0;
    while(*Container){
        if(*Container == *Contained){
            char *ner = Container;
            char *ned = Contained;
          
            while(*ned && *ned==*ner){
                ner++;
                ned++;
            }
            if(*ned=='\0'){
                return Container;
            }
            
        }
        Container++;
    }
    return NULL;
}

int main(void){

    
    printf("%p\n",(void*)Altstr(s1, s2));
    return 0;
}