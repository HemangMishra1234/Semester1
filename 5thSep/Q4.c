#include<stdio.h>

void main(){
    int amount;
    float rate;
    int time;
    float si;
    printf("Enter Amount \n");
    scanf("%d",&amount);
    printf("Enter rate \n");
    scanf("%f", &rate);
    printf("Enter time \n");
    scanf("%d", &time);
    si = amount * rate * time / 100;
    printf("Simple interest: %f \n", si);
}