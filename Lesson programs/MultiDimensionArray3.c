#include <stdio.h>

int main() {
    int matrix[2][2];   //2x2 array
    int i, j;

    //input
    printf("Enter 4 numbers for 2X2 matrix: \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Enter element at [%d] [%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    //output
    printf("\nThe matrix is: \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
