#include<stdio.h>
#include<math.h>

void main(){
   printf("Enter number of units");
   int units;
   scanf("%d" , &units);
   int counter = 0;
   float price = 0.0;
   if ( units >= 0 && units < 76){
       price = (units - 0) * 2.80 + 30;
   }
   else if ( units >= 76 && units < 201){
    price = 75 * 2.80 + (units - 75) *3.55  + 50;
   }
   else if ( units >= 201 && units < 301){
    price = 75 * 2.80 + (200-75)* 3.55 +(units - 200)*6.26 + 80;
   }
   else if ( units >= 301){
    price = 75 * 2.80 + (200-75)* 3.55 +(300 - 200)*6.26 + (units - 300)* 8.2+ 100;
   }
   printf("price=%f" , price);
}