#include <stdio.h>
 
int main() {
    char letra;
 
    // Solicitar al usuario que ingrese una letra
    printf("Ingresa una letra: ");
    scanf("%c", &letra);
 
    // Convertir la letra a minúscula para facilitar la comparación
    letra = (letra >= 'A' && letra <= 'Z') ? letra + 32 : letra;
 
    // Verificar si es una vocal o consonante
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        printf("Es una vocal.\n");
    } else if ((letra >= 'a' && letra <= 'z')) {
        printf("Es una consonante.\n");
    } else {
        printf("No es una letra válida.\n");
    }
 
    return 0;
}