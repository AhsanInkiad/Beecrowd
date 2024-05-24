// Banknotes and Coins

#include <stdio.h>
 
int main() {
 
   double amount;
scanf("%lf",&amount);



   int A1= amount;



      int b,c,d,e,f,g,h,i,j,k,l,m,n;



      b=A1/100;
      c=A1%100;
      d=c/50;
      e=c%50;
      f=e/20;
      g=e%20;
      h=g/10;
      i=g%10;
      j=i/5;
      k=i%5;
      l=k/2;
      m=k%2;
      n=m/1;
        printf("NOTAS:\n");
        printf("%d nota(s) de R$ 100.00\n",b);
        printf("%d nota(s) de R$ 50.00\n",d);
        printf("%d nota(s) de R$ 20.00\n",f);
        printf("%d nota(s) de R$ 10.00\n",h);
        printf("%d nota(s) de R$ 5.00\n",j);
        printf("%d nota(s) de R$ 2.00\n",l);


        double q=amount-A1;

        double r=q*100;
        int r1=r;

        int b1,c1,d1,e1,f1,g1,h1,i1,j1,k1,l1,m1,n1;
      b1=r1/50;
      c1=r1%50;
      d1=c1/25;
      e1=c1%25;
      f1=e1/10;
      g1=e1%10;
      h1=g1/05;
      i1=g1%05;
      j1=i1/01;

        printf("MOEDAS:\n");
        printf("%d moeda(s) de R$ 1.00\n",n);
        printf("%d moeda(s) de R$ 0.50\n",b1);
        printf("%d moeda(s) de R$ 0.25\n",d1);
        printf("%d moeda(s) de R$ 0.10\n",f1);

        printf("%d moeda(s) de R$ 0.05\n",h1);
        printf("%d moeda(s) de R$ 0.01\n",j1);
 
    return 0;
}