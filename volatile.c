#include <stdio.h> 
int flag = 0;
void GPIO(){
    flag = 1;
}
int main(void) {
    printf("Esperando algun cambio\n");
    while (flag == 0){
        /*No es necesario llamar a GPIO porque este cambia y se llama
        a si mismo dado que esta conectado con el hardware,
        al declarar volatile le estamos diciendo que el compilador
        no debe pensar que flag siempre sera cero, este puede cambiar debido
        a un evento externo
        */
    }
    printf("El valor de flag cambio\n");
    return 0;
}