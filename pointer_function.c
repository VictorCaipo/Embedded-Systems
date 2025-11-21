#include <stdio.h>nuevo commit
void swap(int* p0, int* p1);
//This function switch the content of a couple of pointers
int main(void){
    int n0 = 12;
    int n1 = 20;
    printf("Valores iniciales:\n");
    printf("Valor de n0: %i\n",n0);
    printf("Valor de n1: %i\n",n1);
    swap(&n0,&n1);
    printf("Valores finales: \n");
    printf("Valor de n0: %i\n",n0);
    printf("Valor de n1: %i\n",n1);
    return 0;
}
void swap(int* p0, int* p1){
    int temp = *p0;
    *p0 = *p1;
    *p1 = temp;
}