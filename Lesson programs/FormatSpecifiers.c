#include <stdio.h>
#include <stddef.h>

int main(void) {

    int n = 123;
    unsigned int u = 40000u;
    long int L = 2000000000L;
    long long int LL = 900000000000LL;
    float f = 2.14159f;
    double d = 2.718281828;
    char ch = 'C';
    char name[] = "Ada";

    //Printing different data type
    printf("int: %d\n", n);
    printf("unsigned: %u\n", u);
    printf("long: %1d\n", L);
    printf("long long: %11d\n", LL);
    printf("float: %f\n", f);
    printf("double: %1f\n", d);
    printf("char: %c\n", ch);
    printf("string: %s\n", name);

    //Width and precision
    printf("pi (2 decimals): %.2f\n", f);
    printf("n right-aligned width 6: |%6d|\n", n);
    printf("n left-aligned width 6: |%-6d|\n", n);

    //Printing expressions
    printf("2 + 3 = %d\n", 2 + 3);
    printf("Area 7 x 5 = %d\n", 7*5);

    //Sizes and addresses
    printf("sizeof(int) = %zu bytes\n", sizeof(int));
    printf("adress of n = %p\n", (void*)&n);

    return 0;
}
