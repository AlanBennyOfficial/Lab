#include <stdio.h>

void PrintSwappedNum(int *a, int *b){
    *a=*a-*b;
    *b=*b+*a;
    *a=*b-*a;

    printf("Swapped values are: %d & %d\n", *a, *b);
}

int main(){
    int a,b;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);

    printf("Values before swapping are: %d & %d\n", a,b);

    PrintSwappedNum(&a, &b);

    return 0;
}
