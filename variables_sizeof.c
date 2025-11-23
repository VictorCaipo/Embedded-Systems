#include <stdio.h>
//Las variables se crean en la memoria RAM

int main(void){
    int a = 25;
    float peso = 55.5;
    char caracter = 'a';
    char saludo[] = "Hola desde C";
    printf("El size de la variable short es: %zu \n",sizeof(short));
    printf("El size de la variable int es: %zu \n",sizeof(int));
    printf("El size de la variable long es: %zu \n",sizeof(long));
    printf("El size de la variable float es: %zu \n",sizeof(float));
    printf("El size de la variable char es: %zu \n",sizeof(char));
    printf("El size de la variable cadena de char es: %zu \n",sizeof(saludo));
    //El valor devuelto esta en bytes = 16 bits
    //Al compilar asegurarse de estar en la ubicacion donde
    //se encuentra el archivo.
}