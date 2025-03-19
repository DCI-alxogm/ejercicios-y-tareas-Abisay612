#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int opcion;

  
    printf("seleccione una opcion: \n");
    printf("1. Calcular el �rea de un rect�ngulo\n");
    printf("2. Convertir de grados Celsius a Fahrenheit\n");
    printf("3. Verificar si un n�mero es m�ltiplo de otro\n");
    printf("4. Sumar los d�gitos de un n�mero de 2 cifras\n");
    printf("Elige una opci�n (1-4): ");
    scanf("%d", &opcion);

    // Procesar la opci�n seleccionada
    switch (opcion) {
        case 1: {
           
            float base, altura, area;
            printf("\nIngresa la base del rect�ngulo: ");
            scanf("%f", &base);
            printf("Ingresa la altura del rect�ngulo: ");
            scanf("%f", &altura);
            area = base * altura;
            printf("El �rea del rect�ngulo es: %.2f\n", area);
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
            printf("\nIngresa el primer n�mero: ");
            scanf("%d", &num1);
            printf("Ingresa el segundo n�mero: ");
            scanf("%d", &num2);
            if (num1 % num2 == 0) {
                printf("%d es m�ltiplo de %d\n", num1, num2);
            } else {
                printf("%d NO es m�ltiplo de %d\n", num1, num2);
            }
            break;
        }
        case 4: {
            
            int numero, digito1, digito2, suma;
            printf("\nIngresa un n�mero de 2 cifras: ");
            scanf("%d", &numero);
            if (numero >= 10 && numero <= 99) { // Verificar que sea de 2 cifras
                digito1 = numero / 10; // Obtener el primer d�gito
                digito2 = numero % 10; // Obtener el segundo d�gito
                suma = digito1 + digito2;
                printf("La suma de los d�gitos es: %d\n", suma);
            } else {
                printf("El n�mero no es de 2 cifras. Intenta de nuevo.\n");
            }
            break;
        }
        default: {
           
            printf("Opci�n no v�lida. Por favor, elige una opci�n del 1 al 4.\n");
            break;
        }
    }

    return 0;
}