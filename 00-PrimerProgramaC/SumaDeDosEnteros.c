#include <stdio.h>

void sumar(int , int );
int main(){
    int a,b;

    printf("Ingrese su valor entero a: ");
    scanf("%d", &a);

    printf("Ingrese su valor entero b: ");
    scanf("%d", &b);

    sumar(a,b);

    return 0;
}


void sumar(a, b){
    int resultado = a+b;
    printf("Resultado: %d", resultado);
}