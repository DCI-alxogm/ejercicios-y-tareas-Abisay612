#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int opcion, numero;
    float decimal;
    char letra1, letra2, letra3;
    int contador = 0;
    int resultado; // Error 1: resultado deber�a ser double para pow y sqrt
   
    printf("Seleccione una opci�n:\n");
    printf("1. Calcular el cuadrado de un n�mero\n");
    printf("2. Verificar si un n�mero es par o impar\n");
    printf("3. Calcular la ra�z cuadrada de un n�mero decimal\n");
    printf("4. Contar cu�ntas vocales hay en tres letras ingresadas\n");
    scanf("%d", &opcion); // Error 2: Falta validar la entrada

    switch (opcion) {
        case 1:
            printf("Ingrese un n�mero: ");
            scanf("%d", &numero); // Error 3: Falta validar la entrada
            resultado = pow(numero, 2.0); // Error 4: pow devuelve double, pero resultado es int
            printf("El cuadrado de %d es %d\n", numero, resultado); // Error 5: %f no es correcto para int
            break;
        case 2:
            printf("Ingrese un n�mero: ");
            scanf("%d", &numero); // Error 6: Falta validar la entrada
            if (numero % 2 == 0) {
                printf("El n�mero es par.\n");
            } else {
                printf("El n�mero es impar.\n");
            }
            break;
        case 3:
            printf("Ingrese un n�mero decimal: ");
            scanf("%f", &decimal); // Error 7: Falta validar la entrada
            if (decimal >= 0) {
                decimal = sqrt(decimal); // Error 8: sqrt devuelve double, pero decimal es float
                printf("La ra�z cuadrada es: %.2f\n", decimal);
            } else {
                printf("No se puede calcular la ra�z cuadrada de un n�mero negativo.\n");
            }
            break;
        case 4:
            printf("Ingrese tres letras separadas por espacios: ");
            scanf(" %c %c %c", &letra1, &letra2, &letra3); // Error 9: Falta validar la entrada
            if (letra1 == 'a' || letra1 == 'e' || letra1 == 'i' || letra1 == 'o' || letra1 == 'u' ||
                letra1 == 'A' || letra1 == 'E' || letra1 == 'I' || letra1 == 'O' || letra1 == 'U') {
                contador = contador + 1;
            }
            if (letra2 == 'a' || letra2 == 'e' || letra2 == 'i' || letra2 == 'o' || letra2 == 'u' ||
                letra2 == 'A' || letra2 == 'E' || letra2 == 'I' || letra2 == 'O' || letra2 == 'U') {
                contador = contador + 1;
            }
            if (letra3 == 'a' || letra3 == 'e' || letra3 == 'i' || letra3 == 'o' || letra3 == 'u' ||
                letra3 == 'A' || letra3 == 'E' || letra3 == 'I' || letra3 == 'O' || letra3 == 'U') {
                contador = contador + 1;
            }
            printf("Se ingresaron %d vocales.\n", contador);
            break;
        default:
            printf("Opci�n no v�lida\n");
    }
    return 0;
}