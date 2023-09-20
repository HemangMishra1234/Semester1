#include<stdio.h>
#include<math.h>

void main(){
   printf("Enter bacteria , rate and time");
   int b = 0 , r = 0 , t = 0;
   scanf("%d", &b);
   scanf("%d", &r);
   scanf("%d", &t);
   float result = b * pow(( 1 + r / 100.0), t );
   printf("The final number of bacterias are %f ", result );
}