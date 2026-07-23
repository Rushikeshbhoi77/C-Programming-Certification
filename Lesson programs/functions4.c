#include <stdio.h>

//function Declaration
void findsquare();

int main() {
    //function call
    findsquare();
    return 0;
}

    //function Definition
void findsquare() {
    int num, square;
    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;
    printf("Square of %d is %d\n", num, square);
}

