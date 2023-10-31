#include <stdio.h>

int prime(int a);

void main(){
    int len = 3, arr[3][3],i = 0, j = 0,ans[3][3], sumOfUpperTri = 0, sumOfLowerTri = 0, sumOfDia = 0;
    for(i = 0; i < len; i++){
        printf("Start entering the numbers of row %d\n", i +1);
        for (j = 0; j < len;j++)
            scanf("%d",&arr[i][j]);
    }


    for(i = 0; i <len; i++){
        for (j= 0; j < len; j++){
            int ele = prime(arr[i][j]);
            ans[i][j] = ele;
        }
    }

    for(i = 0; i < len; i++){
        for (j = 0; j < len;j++)
            printf("%d ",ans[i][j]);
        printf("\n");
    }
    

   // printf("%d", prime(16));
}

int prime(int a){
    int i =0, j = 0, flag = 1, max = 1;
    for(i = 2; i <= a; i++){
        if(a % i == 0){
        flag = 1;
        for (j = 2; j < i; j++)
            {
                if (i % j == 0)
                  flag = 0;
            }
        if (flag == 1 && i > max)
            max = i;
    }
    }

    return max;
}