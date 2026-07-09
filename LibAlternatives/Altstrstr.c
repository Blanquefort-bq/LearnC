#include <stdio.h>
#include "AltLib.h"

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