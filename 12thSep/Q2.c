#include<stdio.h>
#include<math.h>

void main(){
    int A , B , C ;
    float S , area;
    printf("Enter values of A , B and C");
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    S = ( A + B + C) / 2.0;
    area = sqrt(S*(S - A) * ( S - B) * (S - C));
    printf("Area = %f" , area);
}