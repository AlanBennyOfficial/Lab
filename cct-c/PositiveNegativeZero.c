#include <stdio.h>   
int main()
{
   int m,n;   
   printf("Input the  value of m :");  
   scanf("%d",&m);  
   if(m>0) 
     n=1;
   else if(m<0)
     n=-1;
   else
     n=0;   
   printf("The value of m = %d \n",m);  
   printf("The value of n = %d \n",n);  
   return 0;
}
