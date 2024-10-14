#include <stdio.h>

int main (void){
    int a,i;
    printf("Input any number:\n");
    scanf("%d",&a);

    for(i=2;i<a;i++)
        if(i!=a){
            if(a%i==0){
                printf("%d is not a prime number", a);
                break;
            }else
                i=i+1;
        }else if(i==a)
            printf("%d is a prime number", a);

    return 0;
}
