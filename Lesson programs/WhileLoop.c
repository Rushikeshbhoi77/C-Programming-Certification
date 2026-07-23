#include <stdio.h>

int main() {
    int n, i, sum = 0, digit;

    //While loop for digit count
    printf("Enter A Number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n %10;       //get last digit
        sum += digit;       //add to sum
        n = n /10;           //remove last digit
    }

    printf("sum of digits = %d\n", sum);

    //While loop for table
    printf("This program prints a table of squares.\n");
    printf("Enter Number of Enteries in Table: ");
    scanf("%d", &n);

    i = 1;
    while (i <= n) {
        printf("%10d%10d\n", i, i * i);
        i++;
    }
return 0;
}
