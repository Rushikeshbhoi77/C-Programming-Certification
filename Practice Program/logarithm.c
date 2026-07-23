#include <stdio.h>
#include <math.h>

int main() {
    double value, result;

    printf("Enter the value of log to calculate: ");
    scanf("%1f", &value);

    result = log(value);

    printf("The Natural logarithm of %1f\n", value, result);

    return 0;
}
