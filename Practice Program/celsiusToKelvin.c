#include <stdio.h>

#define SCALE_FACTOR 273.15

int main() {
    float celsius, kelvin;

    printf("Enter the Temperature in Celsius: ");
    scanf("%f", &celsius);

    kelvin = celsius + SCALE_FACTOR;
    printf("Temperature in kelvin is %.2f k\n", kelvin);

     return 0;
}
