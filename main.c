#include <stdio.h>

/* Elaborar una aplicación de línea de comandos en C que 
luego de introducir un valor numérico entero positivo pueda 
mostrar su tabla de multiplicar. */

int main() {
    int n, i;

    printf("Ingresa un numero entero positivo: ");
    scanf("%d", &n);

    while(n < 0) {
        printf("Dato Invalido. Tiene que ser un numero positivo.\n");
        printf("Intenta de nuevo: ");
        scanf("%d", &n);

    }
    printf("\n");
    for (i = 1; i <= 12; ++i) {
        printf("%d * %d = %d \n", n, i, n * i);
        }
    
    return 0;
    }