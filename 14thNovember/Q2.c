#include <stdio.h>

void Maxmin(int[], int*, int*, int);

void main()
{
    int len, a[1000], max, min; 
    printf("Enter the length of an array\n");
    scanf("%d", &len);
    
    printf("Start entering the elements of an array\n");
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &a[i]);
    }

    Maxmin(a, &max, &min ,len);
    printf("The maximum element in the array is = %d \n", max);
    printf("The minimum element in the array is = %d \n", min);
    
}

void Maxmin(int a[], int *max, int *min, int len){
    *max = a[0], *min = a[0];
    for (int i = 0; i < len; i++)
    {
        if(a[i] > *max)
           *max = a[i];
        if (a[i] < *min)
           *min = a[i];
    }
    
}