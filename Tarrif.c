#include<stdio.h>
void main(){
    int months,days;
    float room_rent,tot;
 printf("months:");
 scanf("%d",&months);
 printf("rent:");
 scanf("%f",&room_rent);
 printf("days:");
 scanf("%d",&days);
 if(months<1 || months>12){
     printf("invalid input");
 }
 switch(months)
 {
 case 4:
 case 6:
 case 11:
 case 12:
 tot=room_rent*1.2*days;
 break;
 default:
 tot=room_rent*days;
}
printf("%f",tot);
}