/*Ejercicio de conversion de cordenadas, abisay  feb19 */


#include <stdio.h> 

#include <math.h>

int main() {

double x, y, z; 

double r_cil, theta_cil;

double r_esf, theta_esf, phi_esf;

// Entrada de coordenadas cartesianas

printf("Ingrese las coordenadas cartesianas (x, y, z): ");

scanf("%lf %lf %lf", &x, &y, &z);

// Verificación para evitar divisiones o cálculos inválidos

if (x == 0 && y == 0) {

    printf("Advertencia: x e y no pueden ser ambos cero para el cálculo de theta.\n");

    return 1;

}

if (x == 0 && y == 0 && z == 0) {

    printf("Advertencia: No se pueden calcular coordenadas esféricas con todos los valores en cero.\n");

    return 1;

}

// Conversión a coordenadas cilíndricas

r_cil = sqrt(x * x + y * y);

theta_cil = atan2(y, x);

// Conversión a coordenadas esféricas

r_esf = sqrt(x * x + y * y + z * z);

theta_esf = atan2(y, x);

phi_esf = (r_esf != 0) ? acos(z / r_esf) : 0;

// Imprimir resultados

printf("\nCoordenadas cilíndricas: (r=%.3f, theta=%.3f rad, z=%.3f)\n", r_cil, theta_cil, z);

printf("Coordenadas esféricas: (r=%.3f, theta=%.3f rad, phi=%.3f rad)\n", r_esf, theta_esf, phi_esf);

return 0;

}
 
 
 
 