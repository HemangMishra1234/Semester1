#include<stdio.h>
#include<math.h>

void main(){
    int A , B , C;
    printf("Enter three numbers \n");
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    // if ( A < B && A < C)
    //     printf("Output: 0");
    // else
    //     printf("Output: 1");
    printf("%d" , !(A < B && A < C));
}