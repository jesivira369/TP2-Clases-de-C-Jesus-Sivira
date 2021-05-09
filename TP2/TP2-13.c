#include <stdio.h>
#include <stdlib.h>

int main() {

    int horas, categoria, sueldo;

     printf("\n Escriba las horas trabajadas: ");
    scanf("%d",&horas);

    printf("\n Escriba la categoria del empleado: ");
    scanf("%d",&categoria);

    if (categoria == 1) {
        sueldo = horas * 50;
        printf("\n El sueldo del empleado es: %d ", sueldo);
        system("pause");
    } else if (categoria == 2)
    {
        sueldo = horas *70;
        printf("\n El sueldo del empleado es: %d ", sueldo);
        system("pause");
    } else if (categoria == 3)
    {
        sueldo = horas * 80;
        printf("\n El sueldo del empleado es: %d ", sueldo);
        system("pause");
    }

}