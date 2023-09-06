#include<stdio.h>

void main(){
    float basicSalary;
    printf("Enter basic salary \n");
    scanf("%f", &basicSalary);
    float allowance = basicSalary * 0.25;
    float rent = basicSalary * 0.10;
    float newSalary = basicSalary + allowance + rent;
    float deductionOfToAbsence = newSalary / 30 * 3;
    float finalSalary = newSalary - deductionOfToAbsence;
    printf("Final Salary: %f \n", finalSalary);
}