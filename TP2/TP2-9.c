#include <stdio.h>
#include <stdlib.h>

int main() {

    int horas;
    int bonus = 100;
    int sueldo, total1, total;

    printf("\n Escriba la cantidad de horas trabajadas: ");
    scanf("%d",&horas);

    printf("\n Escriba el valor de la hora: ");
    scanf("%d",&sueldo);

    total1 = horas*sueldo;

    printf("El valor de prueba es: %d", total1);

    if (horas > 150) {
        total = total1 + 250;
        printf("\n El sueldo total a cobrar por el empleado es: %d ", total);
        system("pause");
    } else if (horas> 50 && horas<150)
    {
        total = total1 + bonus;
        printf("\n El sueldo total a cobrar por el empleado es: %d ", total);
        system("pause");
    } else
    {
        printf("\n El sueldo total a cobrar por el empleado es: %d ", total);
        system("pause");
    }
    

}