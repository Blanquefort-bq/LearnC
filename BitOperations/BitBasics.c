#include <stdint.h>
#include <stdio.h>


uint8_t setbit(uint8_t value, uint8_t bit);
uint8_t clearbit(uint8_t value, uint8_t bit);
uint8_t togglebit(uint8_t value, uint8_t bit);
uint8_t checkbit(uint8_t value, uint8_t bit);
uint8_t setmask(uint8_t mask1, uint8_t mask2, uint8_t mask3);

void printbinary(uint8_t value);

int main(){
    uint8_t value = 0b00010100;
    printbinary(value);
    value = setbit(value,7);
    printbinary(value);
    value = clearbit(value,2);
    printbinary(value);
    value = togglebit(value,4);
    printbinary(value);
    uint8_t is_bit_set = checkbit(value,7);
    printf("%u \n",is_bit_set);
    uint8_t maskof3 = setmask((1<<6),(1<<2),(1<<3));
    printbinary(maskof3);
    value |= maskof3;
    printbinary(value);
    uint8_t clearmask = setmask((1<<6),(1<<2),(1<<3));
    value &= ~clearmask;
    printbinary(value);

    uint8_t MixMask = ( (1<<0) | (1<<7));
    value |= MixMask;
    uint8_t MixMask2 = ~(1<<7);
    value &= MixMask2;
    value ^= (1<<0);
    printbinary(value);
    return 0;
}

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
uint8_t setbit(uint8_t value, uint8_t bit){
    value |= (1<<bit);
    return value;
}
uint8_t clearbit(uint8_t value, uint8_t bit){
    value &= ~(1<<bit);
    return value;
}
uint8_t togglebit(uint8_t value, uint8_t bit){
    value ^= (1<<bit);
    return value;
}
uint8_t checkbit(uint8_t value, uint8_t bit){
    return (value&(1<<bit));
}
uint8_t setmask(uint8_t mask1, uint8_t mask2, uint8_t mask3){
    return (mask1 | mask2 | mask3);
}

