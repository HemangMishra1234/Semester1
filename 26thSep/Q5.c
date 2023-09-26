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
   switch(choice){
   case 'A':
   result = a + b;
   printf("The sum of a and b is= %f", result);
   break;
   case'S':
   result == a - b;
   printf("The difference of a and b = %f" , result);
   break;
   case'M':
   result = a * b;
   printf("The product of a and b = %f", result);
   break;
   case 'D':
   result = a / b;
   printf("The division of a and b = %f" ,result);
   break;
   default:
   printf("You entered the wrong character");
   break;
}
}