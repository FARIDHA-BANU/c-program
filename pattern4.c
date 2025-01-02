#include<stdio.h>
void main(){
    int b=5;
    while(b>=1){
        int a=b;
        while(a<=5){
            printf("%d",a);
            a=a+1;
        }
        printf("\n");
        b=b-1;
    }
}