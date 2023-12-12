#include <stdio.h>
#include <stdlib.h>

void main(){
    char ch;
    FILE *p1, *p2;
    p1 = fopen("DATA1.txt","a");
    p2 = fopen("DATA2","r");

    if(p1 == NULL || p2 == NULL){
        printf("Error in opening the file");
        exit(1);
    }
    
    while((fscanf(p2,"%c", &ch)) != EOF){
        fprintf(p1,"%c",ch);
    }
    fclose(p1);
    fclose(p2);
}