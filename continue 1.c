#include<stdio.h>
void main()
{
    int a;
    for(a=1;a<=10;a++){
        if(a>=3 && a<=6){
            continue;
        }
        printf("%d \n",a);
    }
}