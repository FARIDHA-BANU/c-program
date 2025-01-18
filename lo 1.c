#include<stdio.h>
void main(){
    int a,b,c;
    a=10;b=20;
    c=(a=30)||(b=40);
    printf("%d %d %d\n",a,b,c);
}