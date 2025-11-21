#include <stdio.h>
struct mcu_features {
    int prescaler;
    int modo;
    char interrupcion;
    int reservado;
}; 
int main(void){
    struct mcu_features esp32 = {
        .prescaler = 5,
        .modo = 2,
        .interrupcion = 'a',
        .reservado = 0,
    };
    printf(".......................................\n");
    printf("Configuracion del microcontrolador\n");
    printf("Prescales: %d \n",esp32.prescaler);
    printf("Modo: %d \n",esp32.modo);
    printf("Interrupcion: %c \n",esp32.interrupcion);
    printf("Reservado: %d \n",esp32.reservado);
    printf("Fin de la configuracion\n");
    printf(".......................................\n");
    return 0;
}
