#include <stdio.h> 
#include <stdint.h>

int main(void) {
    uint8_t number = 0b00011000;
    uint8_t des_iz = number << 2;
    uint8_t des_der = number >> 2;
    printf("El resultado de %b << 3 es: %b\n",number,des_iz);
    printf("El resultado de %b >> 3 es: %b\n",number,des_der);
}

