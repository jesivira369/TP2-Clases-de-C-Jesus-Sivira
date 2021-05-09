#include <stdio.h>
#include <stdlib.h>

int main() {

    int edad1, estatura1, edad2, estatura2;

    printf("\n Escriba la edad de la primera persona: ");
    scanf("%d",&edad1);

    printf("\n Escriba la estatura de la primera persona en centimetros (cm) : ");
    scanf("%d",&estatura1);

    printf("\n Escriba la edad de la segunda persona: ");
    scanf("%d",&edad2);

    printf("\n Escriba la estatura de la segunda persona en centimetros (cm) : ");
    scanf("%d",&estatura2);

    if (edad1 > edad2) {
        printf("\n El primero es el mayor y su estatura es: %d \n", estatura1);
        system("pause");
    }else{
        printf("\n El segundo es el mayor y su estatura es: %d \n", estatura2);
        system("pause");
    }

}