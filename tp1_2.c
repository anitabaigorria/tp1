#include <stdio.h>

int calcular_cuadrado(int num);
void calcular_cuadrado2(int *num);
void mostrar_contenido(int num);
void invertir(int *a,int *b); 
void orden(int *a,int *b);

int main(){
    int valor1,valor2;

    printf("Ingrese el valor 1: ");
    scanf("%d",&valor1);
    mostrar_contenido(valor1);
    
    printf("\nIngrese el valor 2: ");
    scanf("%d",&valor2);
    mostrar_contenido(valor2);
    
    printf("\n---------------- CALCULOS ----------------\n");
    printf("(valor1) Cuadrado calculado por valor: %d\n",calcular_cuadrado(valor1));
    calcular_cuadrado2(&valor1);
    printf("(valor1) Cuadrado calculado por referencia: %d\n",valor1);
    printf("Invertir los valores de los nros ingresados a=%d b=%d\n",valor1,valor2);
    invertir(&valor1,&valor2);
    printf("|RESULTADO: a=%d b=%d|\n",valor1,valor2);
    
    printf("Ordeno de menor a mayor a=%d b=%d\n",valor1,valor2);
    orden(&valor1,&valor2);
    printf("|RESULTADO: 1ero=%d 2do=%d|\n",valor1,valor2);
    printf("\n----------------------------------------------\n");

    return 0;
}

int calcular_cuadrado(int num){
    return num * num;
}

void calcular_cuadrado2(int *num){
    *num = (*num) * (*num);
}

void mostrar_contenido(int num){
    printf("Contenido de la variable 'num': %d | Direccion : %p\n",num,&num);
}

void invertir(int *a,int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}
 
void orden(int *a,int *b){
    // TENIENDO 2 VALORES, HAY 3 POSIBLES CASOS: a>b, a=b, a<b
    if ((*a) > (*b))
    {
        invertir(a,b);
    }
}
