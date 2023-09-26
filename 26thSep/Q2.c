#include<stdio.h>
#include<math.h>

void main(){
   printf("Enter num\n");
   int num;
   scanf("%d",&num);
   if (num > 0){
    if(num % 2 == 0)
    {
        printf("The number is positive and even");
    
    }
    else
        printf("The number is positive but odd");
   }
   else
       printf("The number is not positive");
}