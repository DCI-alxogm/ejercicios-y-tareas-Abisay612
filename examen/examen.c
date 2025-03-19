#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int opcion;

  
    printf("seleccione una opcion: \n");
    printf("1. Calcular el área de un rectángulo\n");
    printf("2. Convertir de grados Celsius a Fahrenheit\n");
    printf("3. Verificar si un número es múltiplo de otro\n");
    printf("4. Sumar los dígitos de un número de 2 cifras\n");
    printf("Elige una opción (1-4): ");
    scanf("%d", &opcion);

    // Procesar la opción seleccionada
    switch (opcion) {
        case 1: {
           
            float base, altura, area;
            printf("\nIngresa la base del rectángulo: ");
            scanf("%f", &base);
            printf("Ingresa la altura del rectángulo: ");
            scanf("%f", &altura);
            area = base * altura;
            printf("El área del rectángulo es: %.2f\n", area);
            break;
        }
        case 2: {
            
            float celsius, fahrenheit;
            printf("\nIngresa la temperatura en grados Celsius: ");
            scanf("%f", &celsius);
            fahrenheit = (celsius * 9 / 5) + 32;
            printf("La temperatura en Fahrenheit es: %.2f\n", fahrenheit);
            break;
        }
        case 3: {
           
            int num1, num2;
            printf("\nIngresa el primer número: ");
            scanf("%d", &num1);
            printf("Ingresa el segundo número: ");
            scanf("%d", &num2);
            if (num1 % num2 == 0) {
                printf("%d es múltiplo de %d\n", num1, num2);
            } else {
                printf("%d NO es múltiplo de %d\n", num1, num2);
            }
            break;
        }
        case 4: {
            
            int numero, digito1, digito2, suma;
            printf("\nIngresa un número de 2 cifras: ");
            scanf("%d", &numero);
            if (numero >= 10 && numero <= 99) { // Verificar que sea de 2 cifras
                digito1 = numero / 10; // Obtener el primer dígito
                digito2 = numero % 10; // Obtener el segundo dígito
                suma = digito1 + digito2;
                printf("La suma de los dígitos es: %d\n", suma);
            } else {
                printf("El número no es de 2 cifras. Intenta de nuevo.\n");
            }
            break;
        }
        default: {
           
            printf("Opción no válida. Por favor, elige una opción del 1 al 4.\n");
            break;
        }
    }

    return 0;
}