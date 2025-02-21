/*operaciones float feb 17*/

#include <stdio.h>
int main(){
float a,b,c,d;
float e1,e2,e3,e4;
a=5;
b=-30;
c=60;
d=-58;
e1=(a-b)*c/d;
e2=((a/b*c)*c)/d*d;
e3=(a*b)*(c/d);
e4=a*a*b*c/d;
printf("z=(a+b)*c/d=%f\n",e1);
printf("x=((a+b)*c)/d*c=%f\n",e2);
printf("y=(a+b*b*b)*(c/d=%f\n",e3);
printf("o=a+b*c/d=%f\n",e4);
printf("%f\n",(a+a-b)*c/d*d);
printf("%f\n",e1);

}