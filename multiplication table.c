#include<stdio.h>
void main(){
    int n,i=1;
    scanf("%d",&n);
    while(i<=5){
        printf("%d*%d=%d\n",n,i,n*i);
        i++;
    }
    printf("\n");
}