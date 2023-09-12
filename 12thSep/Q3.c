#include<stdio.h>
#include<math.h>

void main(){
    char ch1 , ch2;
    printf("Enter first character\n");
    scanf(" %c", &ch1);
    printf("Enter second character\n");
    scanf(" %c", &ch2);
    
    if ((ch1 != 'Y' && ch1 != 'N') || (ch2 != 'Y' && ch2 != 'N')){
        printf("Invalid input %c %c" , ch1 , ch2);
   }
   else{
    printf("%d", ch1==ch2);
   }
}