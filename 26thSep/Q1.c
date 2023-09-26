#include<stdio.h>
#include<math.h>

void main(){
   printf("Enter the score");
   int score;
   scanf("%d" , &score);
   if (score > 100)
       printf("You won a diary and a pen");
   else if (score > 50)
       printf("You won a Coding ninjas T-shirt");
   else 
       printf("You won a Diary");
}