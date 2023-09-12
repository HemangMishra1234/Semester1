#include<stdio.h>
#include<math.h>

void main(){
    int A , B , C , D , T1 , T2 , T3 , M , N;
    printf("Enter values of  M,A , B , C , D, N");
    scanf("%d", &M);
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);
    scanf("%d", &N);
    T1 = ((M-- * (--A + B++)) / ((C-- * D++)*--N));
    T2 = pow(T1 , 3);
    T3 = sqrt(T2 / T1);
    printf(" A = %d  B = %d  C = %d  D = %d  T1 = %d  T2 = %d  T3 = %d  M = %d  N = %d", A , B , C , D , T1, T2 , T3 , M ,N);
}