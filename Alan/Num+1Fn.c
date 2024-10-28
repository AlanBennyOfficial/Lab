#include <stdio.h>

int IncreaseNumber(int n){
    n+=1;
    return n;
}

int main(){
    int n, o;
    printf("Enter a number:");
    scanf("%d", &n);

    o=IncreaseNumber(n);
    printf("%d incremented by 1 is %d\n", n,o);

    return 0;
}
