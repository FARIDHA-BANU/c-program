#include<stdio.h>
void main(){
    extern int g;
    printf("%d",g);
}
int g;