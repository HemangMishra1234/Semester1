#include<stdio.h>

void main(){
    int a = 1 , b = 2, c;
    c = (a+=3 , 5 , b,3);
    printf("%d", c);
}