#include<stdio.h>
void main(){
    int c=1;
    for(int b=1;b<=5;b++){
        for(int a=1;a<=b;a++){
            printf("%d ",c);
            c++;
        }
        printf("\n");
    }
}