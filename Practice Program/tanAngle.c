#include <stdio.h>
#include <math.h>

void main() {
    double a, b;

    printf("Enter the degree: ");

    scanf("%1f", &a);

    a = (a * 3.14)/ 180;
    b = tan(a);

    printf("tan is %1f", b);
}
