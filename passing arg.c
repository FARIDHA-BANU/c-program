#include<stdio.h>
void test(int a,float f){
    printf("%d %f",a,f);
}
void main(){
    int x=5;
    float y=5.5;
    test(x,y);
}