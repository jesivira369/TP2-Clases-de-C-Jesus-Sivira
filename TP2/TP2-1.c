#include <stdio.h>
#include <stdlib.h>

int main() {

    int numero1, numero2;

    printf("\n Escriba el valor del primer numero: ");
    scanf("%d",&numero1);

    printf("\n Escriba el valor del segundo numero: ");
    scanf("%d",&numero2);

    if (numero1 == numero2) {
        printf("\n Los numeros son iguales ");
        system("pause");
    }else {
        printf("\n Los numeros no son iguales \n");
        system("pause");
    }

    
}