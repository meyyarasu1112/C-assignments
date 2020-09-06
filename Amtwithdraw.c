#include<stdio.h>

void main()
{
    
    int e;/*Entered amount*/
    int a=100;/*Available amount*/
    printf("Enter amount: ");
    scanf("%d",&e);
    if(e<=a)
    printf("Amount can withdraw");
    else
    printf("Amount cannot withdraw");


}
