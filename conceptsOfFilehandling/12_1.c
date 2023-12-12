#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void main(){
    FILE *f1,*f2;
    char ch;
    printf("reached here");
    f1 = fopen("file.txt", "r");
    f2 = fopen("hgksha", "w");
    if(f1 == NULL || f2 == NULL)
    {
        printf("There is an error in opening the files: %s\n", strerror(errno));
        exit(1);
    }
    
    while(!feof(f1)){
        ch = getc(f1);
        printf("%c", ch);
        putc(ch,f2);
    }
   fclose(f1);
    fclose(f2);
}