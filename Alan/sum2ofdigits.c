#include <stdio.h>
#include <math.h>
int main(void)
{
    int n,sum;
    printf("Enter any 2 digit number:");
    scanf("%d",&n);
    sum=(n/10)+(n%10);
    printf("%d",sum);
}
