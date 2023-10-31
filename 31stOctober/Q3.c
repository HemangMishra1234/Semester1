#include <stdio.h>


void main(){
    int len = 4, arr[4][4], lenOfSecondArray = 0,i = 0, j = 0, sumOfUpperTri = 0, sumOfLowerTri = 0, sumOfDia = 0;
    // printf("Enter the length of array less than 4 \n");
    // scanf("%d", &len);
    for(i = 0; i < len; i++){
        printf("Start entering the numbers of row %d\n", i +1);
        for (j = 0; j < len;j++)
            scanf("%d",&arr[i][j]);
    }


    for(i = 0; i <len; i++){
        for (j= 0; j < len; j++){
            if (i < j)
              sumOfUpperTri += arr[i][j];
            else if (i == j)
              sumOfDia += arr[i][j];
            else
              sumOfLowerTri += arr[i][j];
        }
    
    }   
    printf("\nSum of lower triangle = %d \n Sum of diagonal elements = %d \n Sum of upper triangle = %d", sumOfLowerTri, sumOfDia, sumOfUpperTri) ;
}
