#include <stdio.h>

int check(int arr[], int len, int item);

void main(){
    int lenOfRandomArray = 0, ranArr[1000], lenOfSecondArray = 0, secArr[1000],i = 0, j = 0, count;
    printf("Enter the length of array less than 1000");
    scanf("%d", &lenOfRandomArray);
    printf("Start entering the numbers");
    for (i = 0; i < lenOfRandomArray;i++)
        scanf("%d",&ranArr[i]);

    for(i = 0; i <lenOfRandomArray; i++){
        for (j= i + 1; j < lenOfRandomArray; j++){
            if (ranArr[i] == ranArr[j] && !check(secArr, lenOfRandomArray, ranArr[i]))
                {
                    secArr[lenOfSecondArray] = ranArr[i];
                    lenOfSecondArray++;
                }

        }
    }

    for (i = 0; i < lenOfSecondArray; i++){
        printf("Duplicate element %d occured at indices ");
        count = 0;
        for ( j = 0; j < lenOfRandomArray; j++)
        {
            if(secArr[i] == ranArr[j])
                {
                    printf("%d, ", j);
                    count++;
                }
        }
        printf("thus %d times\n",count);
        
    }
    
}

int check(int arr[], int len, int item){//returns 1 if array contains the item else returns 0
    int i = 0, flag = 0;
    for (i = 0; i < len; i++){
        if (arr[i] == item)
            flag = 1;
    }
    
    return flag;
}