#include <stdio.h>

int factorial (int n) {
    if(n == 1) {        //Base case
        return 1;
    }

    return n * factorial (n - 1);
}

int main() {
    int result = factorial(15);
    printf("Factorial = %d\n", result);

    return 0;
}
