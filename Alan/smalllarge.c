//To find the smallest and largest of 3 numbers.
#include <stdio.h>
#include <math.h>

int main(void)
{
    int a,b,c;
    printf("Enter 3 numbers:\n");
    scanf("%d%d%d",&a,&b,&c);

    if (a>b && a>c)
        printf("A is the largest");

    else if (b>a && b>c)
        printf("B is largest");

    else (c>a && c>b);
        printf("C is the largest");

    return 0;
}
