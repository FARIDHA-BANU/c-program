#include<stdio.h>
void main(){
    extern int g;
    g=10;
    printf("%d",g);
}
int g;