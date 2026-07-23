#include <stdio.h>

int main() {
    float radius, area, circumference;

    printf("Enter the radius of the circle in cms: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;      //Area of circle
    circumference = 2 * 3.14 * radius;   //circumference of circle

    printf("Area of circle is %f\n", area);
    printf("Circumference of circle is %f\n", circumference);

    return 0;
}
