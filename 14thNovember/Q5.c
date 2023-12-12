#include <stdio.h>

void Sort(int[], int);
void swap(int*, int*);
void printArray(int[], int);

void main()
{
    int len, a[1000]; 
    printf("Enter the length of an array\n");
    scanf("%d", &len);
    
    printf("Start entering the elements of array A\n");
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &a[i]);
    }

    Sort(a, len);
    printArray(a, len);

}

void Sort(int a[], int len){
    for(int i = 0; i < len; i++){
        for(int j = 0; j < len -1; j++){
            if (a[j + 1] < a[j])
                swap(&a[j], &a[j + 1]);
        }
    }
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int *a, int len){
    int i = 0;
    printf("Printing the elements of the array\n");
    for (i = 0; i < len; i++)
    {
        printf("%d \n", *a);
        a = a + 1;
    }
    
}