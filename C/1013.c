// Greatest

#include<stdio.h>
#include<stdlib.h>

int main(){

    int a,b,s,x,y;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&s);

    x=(a+b+abs(a-b))/2;
    y=(x+s+abs(x-s))/2;
    
    printf("%d eh o maior\n",y);


return 0;

}