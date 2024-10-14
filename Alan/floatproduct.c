#include <stdio.h>

int main(){
    float f1,f2,pro;
    printf("Enter 2 floating point values:\n");
    scanf("%f%f", &f1,&f2);
    pro=f1*f2;
    printf("Product of %f and %f is %f", f1,f2,pro);
    return 0;
}
