#include <stdio.h>

int main(void){
    int n1,n2;
    printf("Input any 2 numbers:\n");
    scanf("%d%d",&n1,&n2);

    n1 = n1 - n2;
    n2 = n1 + n2;
    n1 = n2 - n1;

    printf("The swapped numbers are: %d and %d\n", n1,n2);
    return 0;
}
