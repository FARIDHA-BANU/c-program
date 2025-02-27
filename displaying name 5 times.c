#include<stdio.h>
main()
{
    char name[20];
    int i;
    printf("enter your name:");
    scanf("%s",name);
    printf("name 5 times on the screen\n");
    for(i=1;i<=5;i++)
    printf("%s\n",name);
}