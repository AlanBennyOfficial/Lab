#include <stdio.h>
#include <math.h>
int main(void)
{
    float p,t,r,n,ci;
    printf("To calculate Compound Interest:\nEnter Principal Amount:");
    scanf("%f",&p);
    printf("\nTerm:");
    scanf("%f",&t);
    printf("\nRate of interest:");
    scanf("%f",&r);
    printf("\nTotal number of years:");
    scanf("%f",&n);

    ci=p*pow((1+r/n),n*t);

    printf("Coumpound Interest=%f",ci);
    return 0;
}
