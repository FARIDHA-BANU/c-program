#include<stdio.h>
void main(){
    for(int b=1;b<=5;b++){
        for(int k=1;k<=5-b;k++){
            printf(" ");
        }
        for(int a=1;a<=b;a++){
            printf("%d",a);
        }
        printf(" \n");
    }
    
}