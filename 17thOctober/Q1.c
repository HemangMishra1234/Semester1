#include <stdio.h>
#include <math.h>
int main(){
    for (int i = 15; i>=8; i--){
        int temp = i;
        int bin = 0;
        int count = 0;
        while (temp > 0){
            int d = temp % 2;
            temp = temp / 2;
            bin += (pow(10,count) * d);
            count++;
        }
        printf("%d \n",bin);
    }
    return 0;
}