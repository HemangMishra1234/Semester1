#include<stdio.h>

void main(){
    int book_id;
    float book_price;
    char book_language;
    printf("Enter book id \n");
    scanf("%d",&book_id);
    printf("Enter book price \n");
    scanf("%f", &book_price);
    printf("Enter book language \n");
    scanf(" %c", &book_language);
    if (book_language == 'E' || book_language == 'H'){
    printf("Book_id: %d \n", book_id);
    printf("Book_price: %f \n", book_price);
    printf("Book_language: %c \n", book_language);
    }
    else{
        printf("Invalid input of book language");
    }
}
