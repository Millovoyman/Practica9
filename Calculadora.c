#include <stdio.h>
#include <math.h>

float suma(float a, float b) 
{
    return a + b;
}

float resta(float a, float b) 
{
    return a - b;
}

float multiplicacion(float a, float b) 
{
    return a * b;
}

float division(float a, float b) 
{
    return a / b;
}

float potencia(float a, int b) 
{
    return pow(a, b);
}

float potenciaf(float a, float b) 
{ 
    return pow(a, b);
}

float raiz(float a, int b) 
{ 
    return sqrt(a);
}

int main() 
{
    float res;
    float a = 10, b = 3;
    int c = 5;
    int op;

    do 
    {
        printf("Menú de opciones:\n");
        printf("1. Suma (a + b)\n");
        printf("2. Resta (a - b)\n");
        printf("3. Multiplicación (a * b)\n");
        printf("4. División (a / b)\n");
        printf("5. Potencia (a ^ c)\n");
        printf("6. Raíz cuadrada de a\n");
        printf("0. Salir\n");
        printf("Escoge una opción: ");
        scanf("%d", &op);

        switch(op) 
        {
            case 1:
                res = suma(a, b);
                printf("Resultado: %.2f\n", res);
                break;

            case 2:
                res = resta(a, b);
                printf("Resultado: %.2f\n", res);
                break;

            case 3:
                res = multiplicacion(a, b);
                printf("Resultado: %.2f\n", res);
                break;

            case 4:
                if (b != 0) 
                {
                    res = division(a, b);
                    printf("Resultado: %.2f\n", res);
                } 
                else 
                {
                    printf("Error: división entre cero no permitida.\n");
                }
                break;

            case 5:
                res = potencia(a, c);
                printf("Resultado: %.2f\n", res);
                break;

            case 6:
                if (a >= 0) 
                {
                    res = raiz(a, 2);
                    printf("Resultado: %.2f\n", res);
                } 
                else 
                {
                    printf("Error: no se puede sacar la raíz de un número negativo.\n");
                }
                break;

            case 0:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opción inválida.\n");
                break;
        }

        printf("\n");

    } while(op != 0);

    return 0;
}
