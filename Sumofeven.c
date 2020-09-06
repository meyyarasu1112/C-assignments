#include<stdio.h>
 void main(){
     int sum = 0;
     for(int i = 10; i<51;i++){
         if (i%2 == 0){
             sum = sum + i;
         }
     }
     printf("The sum of even numbers between 10 and 50 are : %d", sum);
 }