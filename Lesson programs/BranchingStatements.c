#include <stdio.h>

int main() {
    int i;

    //Example of loop with break and continue
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            printf("Skipping number %d using continue.\n", i);
            continue; //Skip when i = 5
        }
        if (i == 8)   {
            printf("Breaking the loop at %d.\n", i);
            break; //Stop loop when i = 8
        }
        printf("Number: %d\n", i);
    }

    //Example of goto
    printf("\n Demonstrating goto:\n");
    goto jump; //jump to label
    printf("This line will be skiped.\n");   //won't execute

    jump:
        printf("We have jumped here using goto!\n");

        //Example of return
        printf("\n Programwill end here using return.\n");

        return 0; //return from main
}
