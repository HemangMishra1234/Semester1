#include<stdio.h>
#include<math.h>

void main(){
   printf("Enter marks of 5 subject marks");
   int s1 , s2 ,s3 ,s4 ,s5;
   scanf("%d" , &s1);
   scanf("%d" , &s2);
   scanf("%d" , &s3);
   scanf("%d" , &s4);
   scanf("%d" , &s5);
   float gpa = (s1 + s2 + s3 + s4 +s5) / 5.0 * ( 10.0 / 50.0);
   if ( gpa == 10.0){
   printf("Grade 0");
   }
   else if ( gpa >= 9.0 && gpa < 10.0){
   printf("Grade A");
   }
   else if ( gpa >= 8.0 && gpa < 9.0){
   printf("Grade B");
   }
   else if ( gpa >= 6.5 && gpa < 8.0) {
   printf("Grade C");
   }
   else if ( gpa >= 5 && gpa < 6.5) {
   printf("Grade D");
   }
   else
   printf("Grade F");
}