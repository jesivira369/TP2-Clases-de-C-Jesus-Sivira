#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero1, numero2, resta;

    printf("\n Escriba el valor del primer numero: ");
    scanf("%d",&numero1);

    printf("\n Escriba el valor del segundo numero: ");
    scanf("%d",&numero2);

    if (numero1 > numero2) {
        resta = numero1 - numero2;
        printf("\n El resultado del mayor menos el menor es: %d \n", resta);
        system("pause");

    }else if (numero2>numero1)
    {
        resta = numero2 -numero1;
        printf("\n El resultado del mayor menos el menor es: %d \n", resta);
        system("pause");
    }
    else if (numero1 == numero2)
    {
        printf("\n Los numeros son iguales, por lo tanto su resta es 0 \n");
        system("pause");
    }
}