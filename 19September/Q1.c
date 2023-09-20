#include<stdio.h>
#include<math.h>
//Without third variable

void main(){
   printf("Enter the two numbers");
   int a = 0 , b = 0;
   scanf("%d", &a);
   scanf("%d", &b);
   a = a + b;
   b = a - b;
   a = a - b;
   printf("The value of a and b after swapping are %d and %d ", a , b);
}