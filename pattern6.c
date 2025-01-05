#include<stdio.h>
void main(){
    int b=1;
    while(b<=5){
        int a=b;
        while(a<=5){
            printf("%d",a);
            a=a+1;
        }
        printf("\n");
        b=b+1;
    }
}