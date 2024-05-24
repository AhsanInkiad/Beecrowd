// Bhaskara's Formula

#include<stdio.h>
#include<math.h>
int main(){

  double a,b,c,D,e,f;

         scanf("%lf",&a);
         scanf("%lf",&b);
         scanf("%lf",&c);

         D=(b*b)-4*a*c;
         if(a!=0 && D>=0){
         e=((-b-sqrt(D))/(2.00*a));
         f=((-b+sqrt(D))/(2.00*a));
          printf("R1 = %.5f\n",f);
          printf("R2 = %.5f\n",e);

         }else{

             printf("Impossivel calcular\n");
         }



return 0;

}