// PUM

#include<stdio.h>

int main(){
    int a,i,j,count=0;
    scanf("%d",&a);

    for (i = 0; i < a; i++) {
        count++;
        for ( j = count; j <=count+2; j++) {
            printf("%d ",j);
        }
        count++;
        count++;
        count++;
        printf("PUM\n");
    }
}