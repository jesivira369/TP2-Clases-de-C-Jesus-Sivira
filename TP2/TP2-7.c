#include <stdio.h>
#include <stdlib.h>

int main() {

    int numero1, numero2, numero3, numero4, suma1, suma2;

    printf("\n Escriba el valor del primer numero: ");
    scanf("%d",&numero1);

    printf("\n Escriba el valor del segundo numero: ");
    scanf("%d",&numero2);

    printf("\n Escriba el valor del tercer numero: ");
    scanf("%d",&numero3);

    printf("\n Escriba el valor del cuarto numero: ");
    scanf("%d",&numero4);

    suma1= numero1 + numero2;
    suma2 = numero3 + numero4;

    if (suma1 > suma2) {
        printf("\n La suma de los dos primeros es mayor. \n");
        system("pause");
    } else{
        printf("\n La suma de los dos segundos es mayor. \n");
        system("pause");
    }
}