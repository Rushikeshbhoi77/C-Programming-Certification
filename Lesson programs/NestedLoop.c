#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 3; i++) {    //outer loop -> rows
            for (j = 1; j <= 5; j++) {   //inter loop -> columns
                    printf("* ");
            }
        printf("\n"); //new line after each row
    }
    for (i = 1; i <=5; i++)    {
        printf("\n Multiplication Table of %d\n", i);
    }

    return 0;
}
