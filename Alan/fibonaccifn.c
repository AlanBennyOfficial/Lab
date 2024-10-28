#include <stdio.h>

void PrintFib(int n){
    int n1=0,n2=1,n3=0;

    printf("%d ", n1);
    printf("%d ", n2);
    n3=n1+n2;

    for(int i=3; i<=n; i++){
        printf("%d ", n3);
        n1=n2;
        n2=n3;
        n3=n1+n2;
    }
}

int main(){
    int n;
    printf("Enter the number of terms to print Fibonacci Series upto:\n");
    scanf("%d", &n);

    PrintFib(n);
    return 0;
}
