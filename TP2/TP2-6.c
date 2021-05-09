#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero1, numero2, numero3, suma;
    double promedio;

    printf("\n Escriba el valor del primer numero: ");
    scanf("%d",&numero1);

    printf("\n Escriba el valor del segundo numero: ");
    scanf("%d",&numero2);

    printf("\n Escriba el valor del tercer numero: ");
    scanf("%d",&numero3);

    suma = numero1 + numero2 + numero3;
    promedio = suma/3;

    printf("\n La suma es:  %d", suma);
    printf("\n El promedio es:  %8.3f", promedio);

    if (numero1 > promedio) {
        printf("\n El primer numero es mayor al promedio \n");
        system("pause");
    }
    if (numero2 > promedio) {
        printf("\n El segundo numero es mayor al promedio \n");
        system("pause");
    }
    if (numero3 > promedio) {
        printf("\n El tercer numero es mayor al promedio \n");
        system("pause");
    }



}