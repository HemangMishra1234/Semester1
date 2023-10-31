#include<stdio.h>

void main(){
    int a = 0, b = 0;
    printf("Enter the two numbers \n");
    scanf("%d",&a);
    scanf("%d",&b);
    int sum = 0;
    printf("Prime numbers are :");
    for(int i = a + 1; i < b; i++){
        int count = 0;
        for(int j = 2; j < i; j++){
            if (i % j == 0)
                count++;
        }
        if (count == 0){
            printf("%d ",i);
            sum += i;
        }
    }
    printf("\nsum = %d",sum);
}