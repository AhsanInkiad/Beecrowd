// Simple Calculate

#include <stdio.h>
 
int main() {
double b,b1,sum,x,z;
int a,a1,code,code1;
scanf("%d %d %lf",&code,&a,&b);
x=a*b;
scanf("%d %d %lf",&code1,&a1,&b1);
z=a1*b1;
sum=x+z;

printf("VALOR A PAGAR: R$ %.2lf\n",sum);



return 0;
 
   
}