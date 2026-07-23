/*The problem is about calculating the dimensional weight of a box,
which companies use to charge base on space taken reather than actual
weight. The formula divides base on Space rather than actual weight.
The formula divides the box's volume by 166, but sice integer division
in c truncates decimals (rounds down ), we adjust by adding 165 before
dividing to proper round up. */

#include <stdio.h>

int main() {
    int height, length, width, volume, weight;

    printf("Enter height of the box: ");
    scanf("%d", &height);
    printf("Enter length of the box: ");
    scanf("%d", &length);
    printf("Enter width of the box: ");
    scanf("%d", &width);

    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("volume of box is %d (cubic meters)\n", volume);
    printf("dimensional weight of the box is % d kgs\n", weight);

    return 0;
}
