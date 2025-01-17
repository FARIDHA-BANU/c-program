#include<stdio.h>
void f1(){
    extern int g;
    ++g;
}
int g;
void g1(){
    ++g;
}
void main(){
    ++g;
    f1();
    g1();
    printf("%d",g);
}