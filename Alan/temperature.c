#include <stdio.h>
int main(void)
{
    int n;
    float c,f;
    printf("What do you want to convert:\n1. Celsius into Farenheight(type 1)\n2. Fraenheight into Celcius(type 2)\nInput:");
    scanf("%d",&n);
    if (n==1){
    printf("Enter temperature(in Celsius):");
    scanf("%f",&c);
    f=(c+32)*9.0/5.0;
    printf("%f",f);
    }
    else {
    printf("Enter temperature(in Fraenheight):");
    scanf("%f",&f);
    c=(f-32)*5.0/9.0;
    printf("%f",c);
    }
    return 0;
}
