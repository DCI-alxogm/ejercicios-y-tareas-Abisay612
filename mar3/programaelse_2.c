#include<stdio.h>
#include<string.h>
int main(){
   int a, residuo;
   char opc[2];
leernumero:
  printf("Introduce el número a revisar\n");
  scanf("%i",&a);
  residuo=a%2;
  if(residuo==0){
      printf("El número %i es par\n", a);
}
  else{ 
      printf("El número %i es impar\n", a);
}
  printf("Quieres revisar otro número?\n");
  scanf("%s", opc);
  if(strcmp(opc,"si")==0){
    goto leernumero;
}
  else if(strcmp(opc,"no")==0){
        printf("Hasta la proxima\n");
}
  else{ 
        printf("Solo acepto si o no\n");
}

}
 
