//Utilizando una lista capturar las 5 calificaciones de un alumno e imprimir el promedio//
#include <stdio.h>

int main()
{
    int list[5]={57,73,24,12,20};
    int i;
    printf("los números de la lista son: ");
    for (i=0; i<5; i++)
    {
        printf("%d, ", list[i]);
    }
    printf("\n");
}
