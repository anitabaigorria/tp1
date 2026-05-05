#include <stdio.h>

int main(){

    printf("Hola Mundo!");
    
    int num = 100, *Pnum;
    
    Pnum = &num;
    printf("Contenido del puntero: %d\n",*Pnum);
    printf("Direccion de memoria almacenada por el puntero: %p\n",Pnum);
    printf("Direccion de memoria de la variable: %p\n",&num);
    printf("Direccion de memoria del puntero: %p\n",&Pnum);
    printf("Tamanio de memoria utilizado por esa variable: %d\n",sizeof(num));

    return 0;
}