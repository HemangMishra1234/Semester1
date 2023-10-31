#include <stdio.h>

int check(int arr[], int len, int item);

void main(){
    int len = 0, arr[1000], lenOfSecondArray = 0, secArr[1000],i = 0, j = 0, count;
    printf("Enter the length of array less than 1000 \n");
    scanf("%d", &len);
    printf("Start entering the numbers \n");
    for (i = 0; i < len;i++)
        scanf("%d",&arr[i]);
    
    printf("Pairs are ");
    for(i = 0; i <len; i++){
        for (j= i + 1; j < len; j++){
            if ((arr[i] % arr[j] == 0))
                {   
                    if(count == 0)
                       printf("(%d, %d)", arr[i], arr[j]);
                    else
                       printf(", (%d, %d)", arr[i], arr[j]);
                    count++;
                }
        }
    }   
    printf("\nNo of pairs are: %d", count) ;
}
