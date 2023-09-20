#include<stdio.h>
#include<math.h>

void main(){
   printf("Enter either of 'A' , 'S' , 'M' or 'D'");
   float result = 0.0;
   char choice;
   scanf(" %c" , &choice);
   printf("Enter the values of a and b");
   int a =0 , b=0;
   scanf("%d", &a);
   scanf("%d", &b);
   if ( choice == 'A'){
   result = a + b;
   printf("The sum of a and b is= %f", result);
   }
   else if ( choice == 'S'){
   result == a - b;
   printf("The difference of a and b = %f" , result);
   }
   else if ( choice == 'M'){
   result = a * b;
   printf("The product of a and b = %f", result);
   }
   else if ( choice == 'D') {
   result = a / b;
   printf("The division of a and b = %f" ,result);
   }
   else
   printf("You entered the wrong character");
}