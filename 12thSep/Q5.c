#include<stdio.h>
#include<math.h>

void main(){
    int A , B , C ;
    printf("Enter three numbers");
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    printf("The smallest number is = %d" , ( A < B) ? ((A < C)? A : C):(( B < C) ? B : C));
}