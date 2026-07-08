#include <stdint.h>
#include <stdio.h>


uint8_t setbit(uint8_t value, uint8_t bit);
uint8_t clearbit(uint8_t value, uint8_t bit);
uint8_t togglebit(uint8_t value, uint8_t bit);
uint8_t checkbit(uint8_t value, uint8_t bit);
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