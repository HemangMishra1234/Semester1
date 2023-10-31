#include <stdio.h>
#include <math.h>
void main(){
    printf("Enter numbers a and b \n");
    int a, b;
    scanf("%d",&a);
    scanf("%d",&b);
    int rev1, rev2;
    int temp = a;
    while(temp > 0){
        int d = temp % 10;
        temp = temp / 10;
        rev1 = rev1*10 + d;
    }
    temp = b;
    rev2 = 0;
    while(temp > 0){
        int d = temp % 10;
        temp = temp / 10;
        rev2 = rev2*10 + d;
    }
   // printf("a rev = %d b rev = %d",rev1,rev2);
    int ans = 0;
    int sqt1 = sqrt(rev1);
    int sqt2 = sqrt(rev2);
    if ((sqt1*sqt1 == rev1) && (sqt2*sqt2 == rev2))
        ans = rev1 + rev2;
    else if ((sqt1*sqt1 == rev1) || (sqt2*sqt2 == rev2))
        ans = a + b;
    else 
        ans = a * b;
    printf("Ans = %d",ans);
}