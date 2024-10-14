#include <stdio.h>

int main(void){

    int a,b,c,sum;
    printf("Program to find sum of 3 numbers\n");
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("Enter third number:");
    scanf("%d",&c);
    sum = a+b+c;
    printf("Sum = %d\n",sum);
    return 0;
}
