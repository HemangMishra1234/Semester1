#include <stdio.h>

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
    FILE *d1, *d2, *d;
    int len1 = 0, len2 = 0, ele, i;

    d1 = fopen("DATA1.txt","r");
    d2 = fopen("DATA2", "r");
    d = fopen("DATA", "w");

    while(!feof(d1)){
        i = fscanf(d1,"%d",&ele);
        if(i == 1)
        arr[len1++] = ele;
    }

    while(!feof(d2)){
        i = fscanf(d2,"%d",&ele);
        if(i == 1)
        arr[len1 + len2++] = ele;
    }

    sortArr(arr, len1 + len2);

    for(i = 0; i < len1 + len2; i++){
        fprintf(d,"%d", arr[i]);
    }

    fclose(d1);
    fclose(d2);
    fclose(d);
}