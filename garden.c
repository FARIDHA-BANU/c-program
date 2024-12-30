#include<stdio.h>
void main(){
    int a,b,c,e,f;
    scanf("%d%d%d",&a,&b,&c);
    e=1+1;
    f=a-1;
    if(c%a==e || c%a==f){
        printf("It is mango tree");
    }
    else{
        printf("It is apple tree");
        
    }
    printf("\n");
}