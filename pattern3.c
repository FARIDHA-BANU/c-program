#include<stdio.h>
void main(){
    int b=5;
    while(b>=1){
        int a=5;
        while(a>=b){
            printf("%d",a);
            a=a-1;
        }
        printf("\n");
        b=b-1;
    }
}