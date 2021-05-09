#include <stdio.h>
#include <stdlib.h>

int main() {

    int numero1, numero2, producto;

    printf("\n Escriba el valor del primer numero: ");
    scanf("%d",&numero1);

    printf("\n Escriba el valor del segundo numero: ");
    scanf("%d",&numero2);

    if (numero1>numero2) {
        producto = numero1 * numero2;

        printf("\n El producto de los dos numeros es: %d \n", producto);
        system("pause");
    }

    if (numero1 == numero2) {
        printf("\n Los dos numeros son iguales \n");
        system("pause");
    }

}