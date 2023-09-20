#include<stdio.h>

void main(){
    unsigned int a = 56787U;
    unsigned long int b = 56787UL;
    long int c = 56787L;
    printf("%zu \n",sizeof(a));//4
    printf("%zu \n",sizeof(b));//4
    printf("%zu \n",sizeof(c));//4
}