#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int count=0;
    while(n!=0){
        if(n%2==0){
            n=n/2;
        }
        else{
            n=n-1;
            count++;
        }
    }
    printf("%d",count);
}