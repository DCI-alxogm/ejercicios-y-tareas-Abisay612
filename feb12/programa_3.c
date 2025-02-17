/*febrero 12, 2015, abisay programa 3, variables*/
#include <stdlib.h>
#include <stdio.h>
int main(){
char nombre[10];
int edad;
float temperatura;
printf("¿cual es tu nombre? \n");
scanf("%s",nombre);
printf("hola,  %s este es mi 3er programa del curso \n", nombre);
printf("introduce tu edad \n");
scanf("%i", &edad);
printf("¿que temperatura marco el termometro? \n");
scanf("%", &temperatura);
printf("tu edad es: %i\n", edad);
printf("tu ultimo registro de temperatura fue: %f\n", temperatura);

}

 /*termine programa_3*/
