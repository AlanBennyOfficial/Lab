#include <stdio.h>

int readnum();

void printnum(int n);

int main(){
    int n;
    n=readnum();
    printnum(int n);
    return 0;
}

int readnum(){
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    return n;
}

void Printnum(int n){
    for(int i=1; i<n; i++){
        printf("%d ",i);
        }
    return;
}
