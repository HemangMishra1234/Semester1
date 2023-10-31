#include <stdio.h>

void main(){
    for (int i = 0;i < 4; i++){
        for (int j = 0; j < i; j++)
            printf("  ");
        for (int k = 1; k <= 2*(4 - i); k++)
            printf("%d ",k);
        printf("\n");
    }
    printf("       1");
}