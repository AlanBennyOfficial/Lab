#include <stdio.h>

void ArrayTranpose(int size, int i, int j){

    printf("The transpose of the matrix is:\n");
    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++){
                printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
}

int main(){
    int size, arr[25][25];
    printf("Enter the size of the array:");
    scanf("%d", &size);

    printf("Enter the matrix elements:\n");

    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++){
                scanf("%d", &arr[i][j]);
        }
        printf("\n");

    ArrayTranpose(size,i,j,arr[][]);

    return 0;
}
