#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter two numbers (eg. :5 8): ");
    scanf("%d %d", &a, &b);

    c = a + b; //addition
    printf("The Sum is %d\n", c);

    c = a - b; //substration
    printf("The difference is %d\n", c);

    c = a * b; //Multiplication
    printf("The product is %d\n", c);

    c = a/b; //division
    printf("The Division s %d\n", c);

    return 0;
}
