#include <stdio.h>

int main() {
    int digit;

    printf("Enter a single digit number (0-9): ");
    scanf("%d", &digit);

    switch (digit) {
   case 0:
    printf("Zero\n");
    break;
   case 1:
    printf("One\n");
    break;
   case 2:
    printf("Two\n");
    break;
   case 3:
    printf("Three\n");
    break;
   case 4:
    printf("Four\n");
    break;
   case 5:
    printf("Five\n");
    break;
   case 6:
    printf("Six");
    break;
   case 7:
    printf("Seven");
    break;
   case 8:
    printf("Eight");
    break;
   case 9:
    printf("Nine");
    break;
    default:
       printf("Invalid input! please inter a single digit (0-9)\n");
    }

    return 0;
}
