#include <stdio.h>

void Sum(int, int*);
void Rev(int, int*);

void main()
{
    int a, sum, rev;
    printf("ENter an element \n");
    scanf("%d", &a);
    Sum(a, &sum);
    Rev(a, &rev);
    printf("SUm is = %d \nReverse = %d", sum, rev);
}

void Sum(int val,int *a){
    int d, sum = 0;
    while(val > 0){
        d = val % 10;
        val = val / 10;
        sum += d;
    }
    *a = sum;
}

void Rev(int val, int *a){
    int d, rev = 0;
    while(val > 0){
        d = val % 10;
        val = val / 10;
        rev = rev*10 + d;
    }
    *a = rev;
}