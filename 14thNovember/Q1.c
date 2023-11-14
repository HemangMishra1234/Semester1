#include <stdio.h>

void inputArray(int*, int);
void printArray(int*, int);

void main()
{
    int len, a[1000]; 
    printf("Enter the length of an array\n");
    scanf("%d", &len);

    //inputting the elements
    inputArray(a, len);
    printArray(a, len);
}

void inputArray(int *a, int len){
    int i = 0;
    printf("Start entering the elements of an array\n");
    for (i = 0; i < len; i++)
    {
        scanf("%d", a);
        a = a + sizeof(int);
    }
    
}

void printArray(int *a, int len){
    int i = 0;
    printf("Printing the elements of the array\n");
    for (i = 0; i < len; i++)
    {
        printf("%d \n", *a);
        a = a + sizeof(int);
    }
    
}