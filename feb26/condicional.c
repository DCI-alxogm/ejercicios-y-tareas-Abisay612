/*indicador si es par o no*/
/*abisay 26 de feb*/

 
#include <stdio.h>
 
int main() {
    int numero;
    char opcion;
 
    while (1) { // Bucle infinito, se rompe con 'n'
        printf("Ingrese un n�mero: ");
        scanf("%d", &numero);
 
        if (numero % 2 == 0) {
            printf("El n�mero %d es par.\n", numero);
        } else {
            printf("El n�mero %d es impar.\n", numero);
        }
 
        printf("�Quieres analizar otro n�mero? (s/n): ");
        scanf(" %c", &opcion);
 
        if (opcion == 'n' || opcion == 'N') {
            break; // Sale del bucle si el usuario responde 'n'
        }
    }
 
    printf("Programa finalizado.\n");
    return 0;
}
 