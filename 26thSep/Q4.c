#include<stdio.h>
#include<math.h>

void main(){
    printf("Enter the value of a, b, c in the quadratic equation ax^2 + bx +c = 0\n");
    float a, b, c;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    float D = (b * b - 4 * a * c);
    switch (D >= 0)
    {
    case 1:
        float r1 = (-b + sqrt(D))/(2 * a);
        float r2 = (-b - sqrt(D))/(2 * a);
        printf("The roots of the quadratic equations are %f and %f ",r1, r2);
        break;
    default:
        printf("No real root");
        break;
    }
}