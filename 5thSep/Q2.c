#include <stdio.h>

void main(){
    int year, months;
    printf("Enter the number of years \n");
    scanf("%d" , &year);
    printf("Enter number of months \n");
    scanf("%d" , &months);
    int totalMonths = year * 12 + months;
    printf("The total number of months are: %d", totalMonths);
}