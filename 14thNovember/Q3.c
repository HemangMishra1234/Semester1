#include <stdio.h>

void swap(int[], int[], int);
void printArray(int[], int);
void swapElements(int *a, int *b);

void main()
{
    int len, a[1000], b[1000], max, min; 
    printf("Enter the length of an array\n");
    scanf("%d", &len);
    
    printf("Start entering the elements of array A\n");
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Start entering the elements of array B\n");
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &b[i]);
    }

    swap(a, b, len);
    
    printf("Printing the elements of array A \n");
    printArray(a, len);
    printf("Printing the elements of array B \n");
    printArray(b, len);
    
}

void swap(int a[], int b[], int len){
    int temp;
    for (int i = 0; i < len; i++)
    {
        swapElements(&a[i], &b[i]);
    }
}

void swapElements(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int a[], int len){
    int i = 0;
   // printf("Printing the elements of the array\n");
    for (i = 0; i < len; i++)
    {
        printf("%d \n", a[i]);
        //a = a + sizeof(int);
    }
    
}