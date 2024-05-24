// Squared and Cubic

#include<stdio.h>

int main(){
        int a,i,count=0;

        scanf("%d",&a);
        if(a>1 && a<1000){
        for (i = 1; i <= a; i++) {
            printf("%d ",i);
            printf("%d ",i*i);
            printf("%d\n",i*i*i);
        }
    }
}