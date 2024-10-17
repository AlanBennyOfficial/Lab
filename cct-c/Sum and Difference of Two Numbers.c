//Sum and Difference of Two Numbers
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,sumint,difint;
    float c,d,sumfl,diffl;
    scanf("%d%d",&a,&b);
    scanf("%f%f",&c,&d);
    
    sumint=a+b;
    difint=a-b;
    sumfl=c+d;
    diffl=c-d;
    
    printf("%d %d\n",sumint,difint);
    printf("%.1f %.1f",sumfl,diffl);
    return 0;
}
