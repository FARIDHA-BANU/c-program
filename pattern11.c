#include<stdio.h>
void main(){
    int b=1;
    while(b<=5){
        int a=1;
        while(a<=b){
            printf("%d",a%2);
            a=a+1;
        }
        printf("\n");
        b=b+1;
    }
}