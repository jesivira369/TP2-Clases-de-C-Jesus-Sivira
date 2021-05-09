#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero1;

    printf("\n Escriba el valor del numero a revisar: ");
    scanf("%d",&numero1);

    if (numero1>0 || numero1<0) {
        if(numero1 > 0) {
            printf("\n El numero es positivo \n");
            system("pause");
        }else{
            printf("\n El numero es negativo \n");
            system("pause");
        }
    } else {
        printf("\n El numero es igual a 0 \n");
        system("pause");
    }
}