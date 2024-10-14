#include <stdio.h>
int main(void)
{
    float p,t,r,si;
    printf("To calculate Simple Interest:\nEnter Principal Amount:");
    scanf("%f",&p);
    printf("\nTerm:");
    scanf("%f",&t);
    printf("\nRate of interest:");
    scanf("%f",&r);

    si=(p*t*r)/100;

    printf("Simple Interest=%f",si);
    return 0;
}
