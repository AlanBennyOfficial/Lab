#include <stdio.h>

int main(void)
{
	int n1,n2,sum;
	float avg;
	printf("Enter 2 values:");
	scanf("%d%d",&n1,&n2);
	sum=n1+n2;
	avg=sum/2;
	printf("Average of %d and %d is %f; and sum is %d",n1,n2,avg,sum);
	return 0;
}
