#include <stdio.h>
#include <stdint.h>

int main(){
    // & and | operators
    uint8_t a = 0b1100;
    uint8_t b = 0b1111;
    uint8_t c = a & b;
    uint8_t d = a | b;
    printf("El resultado de & es: %b\n",c);
    printf("El resultado de | es: %b\n",d);
}