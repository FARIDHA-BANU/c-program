#include<stdio.h>
void main(){
    int a,b,c;
    a=10;b=20;
    c=(a=0)&&(b=1);
    printf("%d %d %d\n",a,b,c);
}