#include <stdio.h>
int main()
{
    float height;
 
    printf("Enter the Height (in centimetres):");
    scanf("%f", &height);
    if (height < 150.0)
        printf("Dwarf \n");
    else if (height >= 150.0 && height <= 165.0)
        printf(" Average Height \n");
    else if (height > 165.0 && height <= 195.0)
        printf("Taller \n");
    else
        printf("Abnormal height \n");
        
    return 0;
}
