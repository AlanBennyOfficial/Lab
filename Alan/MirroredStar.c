#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++)
    {
        printf("\n");
        for(int k=1; k<=(n-i);k++){
            printf(" ");
        } 
            for(int j = 1; j <= i; j++){
                 printf("*");
                
            } 
    }
    return 0;
}
