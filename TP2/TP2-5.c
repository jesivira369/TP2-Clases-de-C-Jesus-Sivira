#include <stdio.h>
#include <stdlib.h>

int main() {

    int lado1, lado2, lado3;

    printf("\n Escriba el valor del primer lado: ");
    scanf("%d",&lado1);

    printf("\n Escriba el valor del segundo lado: ");
    scanf("%d",&lado2);

    printf("\n Escriba el valor del tercer lado: ");
    scanf("%d",&lado3);

    if (lado1==lado2 || lado1==lado3) {
        if(lado1==lado2 && lado1==lado3) {
            printf("\n Es un triangulo equilatero. \n");
            system("pause");
        }else{
            printf("\n Es un triangulo isoseles. \n");
        system("pause");
        }
    }else{
        printf("\n Es un triangulo escaleno.\n");
        system("pause");
    }

}