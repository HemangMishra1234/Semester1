#include<stdio.h>
#include<math.h>
//With third variable

void main(){
   printf("Enter the two numbers");
   int a = 0 , b = 0 , temp = 0;
   scanf("%d", &a);
   scanf("%d", &b);
   temp = a;
   a = b;
   b = temp;
   printf("The value of a and b after swapping are %d and %d ", a , b);
}