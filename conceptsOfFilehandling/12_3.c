#include <stdio.h>
#include <stdlib.h>

void sortArr(int arr[100],int len){
    int i, j, temp;
    for(i = 0; i < len - 1; i++){
        for(j = 0; j  < len - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j+1] = temp;
            }
        }
    }
}

void main(){
    int arr[100];
    FILE *d1, *d2;
    int len1 = 0, len2 = 0,flag = 1, i;
    char ele1, ele2;

    d1 = fopen("DATA1.txt","r");
    d2 = fopen("DATA2", "r");

    if(d1 == NULL  || d2 == NULL){
        printf("Error in opening the file");
        exit(1);
    }

    while(1){
        if(feof(d2) && feof(d1))
            break;
        else if(feof(d2) || feof(d1)){
            flag = 0;
            break;
        }
        fscanf(d1,"%c",&ele1);
        fscanf(d2,"%c",&ele2);
        if(ele1 != ele2)
        flag = 0;
    }
    printf("Result is %d", flag);

    fclose(d1);
    fclose(d2);
}