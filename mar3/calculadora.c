#include<stdio.h>


#include<string.h>


#include<math.h>


int main(){


   float TK, TC;


   double x,y,z;


   double rcil,?cil;


   double resf, ?esf, ?;


   int opc;


   int var;


   char resp[2];


   calculadora:


   printf("Que operaci�n quieres realizar?\n 1=Conversi�n de Temperatura \n 0=Coordenadas Cartesianas \n");


   scanf("%i",&var);


  if(var==1){


    goto temperatura;


        temperatura:


    printf("Inserte temperatura en Celsius\n");


        scanf("%f", &TC);


        TK= TC+273.15;


    printf("%f grados Celsius en Kelvin son: %f \n", TC, TK);


}


  else if(var==0){


    goto coordenadas;


    coordenadas:


      printf("Quieres tipo de coordenadas quieres?\n 1= Cil�ndricas\n 0= Esf�ricas\n");


      scanf("%i",&opc);


   if(opc==1){


      printf("Introduce el valor de x: ");


    scanf("%lf", &x);


    printf("Introduce el valor de y: ");


    scanf("%lf", &y);


    printf("Introduce el valor de z: ");


    scanf("%lf", &z);


    //Operaciones cil�ndricas


    rcil=sqrt(x*x+y*y);


    ?cil=atan2(y,x);


    printf("\nCoordenadas cil�ndricas:(r=%f, ?=%f rad, z=%f)\n",rcil,?cil,z);


}


  else if(opc==0){


      printf("Introduce el valor de x: ");


      scanf("%lf", &x);


      printf("Introduce el valor de y: ");


      scanf("%lf", &y);


      printf("Introduce el valor de z: ");


      scanf("%lf", &z);


  // Operaciones esf�ricas


    resf= sqrt(x*x+y*y+z*z);


    ?esf=atan2(y,x);


    ?=acos(z/resf);  


    printf("Coordenadas esf�ricas: (r=%f, ?=%f rad, ?=%f rad)\n",resf,?esf,?);


}


}
 
    printf("Quieres realizar otr operaci�n?\n");


    scanf("%s",resp);


  if(strcmp(resp,"si")==0){


    goto calculadora;


}


  else if(strcmp(resp,"no")==0){


        printf("Hasta la proxima\n");  


}


}
 