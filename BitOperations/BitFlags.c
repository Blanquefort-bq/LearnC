#include <stdint.h>
#include <stdio.h>


//ex1
#define FLAG_A (1<<0)
#define FLAG_B (1<<1)
#define FLAG_C (1<<2)
//ex2
#define EX2_1 (1<<2)
#define EX2_2 (1<<3)

//ex3
#define FLAG_D (1<<7)

//ex6 
#define F1 (1<<3)
#define F2 (1<<1)
#define F3 (1<<2)

void printbinary(uint8_t value);

void ex1();
void ex2(); 
void ex3();
void ex4(uint8_t x);
void ex5();
void ex6();
void ex7();



void printbinary(uint8_t value){
    for(int i = 7; i >= 0 ;i--){
        if(value & (1<<i)){
            printf("1");
        }
        else{
            printf("0");
        }
    }
    printf("\n");
}

int main(){
    //ex1();
    //ex2();
    //ex3();
    //ex4(0b00110101);
    //ex5();
    //ex6();
    ex7();
 return 0;
}


void ex1(){

//Zdefiniuj
    // * FLAG_A = bit 0
    // * FLAG_B = bit 1
    // * FLAG_C = bit 2
// Zrób:
    // * ustaw A i C
    // * sprawdź B

    uint8_t value = 0b00000000;
    value |= FLAG_A | FLAG_C;
    printbinary(value);
    uint8_t checkbit = value& FLAG_B;
    printf("%u \n", checkbit);
}
void ex2(){
    uint8_t x = 0b00101100;
    printf("%u \n", (x & EX2_1));
    printf("%u \n",(x & EX2_2));

}
void ex3(){
// * ustaw wszystkie 8 bitów na 1
// * wyczyść tylko FLAG_B i FLAG_D

    uint8_t x = 0b00000000;
    for(int i=0; i<=7;i++){ x |= (1<<i); }
    uint8_t mask = FLAG_B | FLAG_D;
    x &= ~mask;
    printbinary(x);   
}
void ex4(uint8_t x){
    x ^= FLAG_A | FLAG_C;
    printbinary(x);
}
void ex5(){

    //Bit packing
    uint8_t high = 0b0101;
    uint8_t low = 0b1010;
    high = (high<<4);
    uint8_t full = high | low;
    printbinary(full);
}
void ex6(){
    uint8_t x = 0;
    x = F1 | F2| F3;
    printbinary(x);
    x &= ~(1<<1);
    printbinary(x);
    x ^= (1<<2);
    printbinary(x);
}
void ex7(){
    uint8_t x = 0b00001101;
    uint8_t mask = FLAG_A | FLAG_C;
    if((x&mask)== mask){
        printf("Bits are set \n");
    }
    else{
        printf("Bits arent set \n");
    }
    
}