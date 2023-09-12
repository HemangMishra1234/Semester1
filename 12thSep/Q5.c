#include<stdio.h>
#include<math.h>

void main(){
    int A , B , C , smallest ;
    printf("Enter three numbers");
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    smallest = ( A < B) ? ((A < C)? A : C):(( B < C) ? B : C);
    printf("The smallest number is = %d" , smallest);
}