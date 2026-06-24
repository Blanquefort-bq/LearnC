#include <stdio.h>


    int IntA[80]= {1,3,5,1,2,5,1,2};
    int IntB[40];

int CopyArray(int *destination, const int *source, int count){
    for (int i =0; i < count; i++){
        *destination++ = *source++;
    }
    return *destination;
}

int main(void){

    int copyCount = 4;
    CopyArray(IntB, IntA, copyCount);
    for(int i = 0; i<copyCount;i++){
        printf("%d ",IntB[i]);
    }
    printf("\n");
    return 0;
}
