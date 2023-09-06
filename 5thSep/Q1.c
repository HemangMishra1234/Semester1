#include<stdio.h>

void main(){
    int i1,i2;
    char c1,c2;
    float f1,f2;
    printf("Enter the two float values\n");
    scanf("%f %f",&f1 ,&f2);
    printf("Enter the two integer values\n");
    scanf("%d %d",&i1,&i2);
    printf("Enter the two character values\n");
    scanf(" %c %c",&c1,&c2);// We must give space here in front
    printf("The integers values that you entered are %d and %d \n" , i1 , i2);
    printf("The character values that you entered are %c and %c \n" , c1 , c2);
    printf("The float values that you entered are %2f and %2f \n" , f1 , f2);
}