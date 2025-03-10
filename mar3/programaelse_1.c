#include<stdio.h>
   int main(){
   int a, residuo;
   int opc;
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
printf("Quieres revisar otro número? Inserta 1 para si, 0 para no\n");
  scanf("%i",&opc);
  if(opc==1){
    goto leernumero;
}
  else{ 
        printf("Bye");
}

}
