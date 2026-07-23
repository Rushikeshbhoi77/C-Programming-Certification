#include<stdio.h>

int main() {
        printf("Demonstrating Escape Sequences in C\n\n");

        printf("1.Newline->Hello\\nWorld:\n");
        printf("hello\nWorld\n\n");

        printf("2.Tab->Hello\\tWorld:\n");
        printf("Hello\t\tWorld\n\n");

        printf("3.Backspace->Helloo\\bworld:\n");
        printf("Helloo\bWorld\n\n");

        printf("4.Carriage Return->Hello World\\rHI:\n");
        printf("Hello World\rHioo\n\n");

        printf("5.\"Backslash\"->\\\\:\n");
        printf("\\\n\n");

        printf("6.Single Quote->\\\':\n");
        printf("\'\n\n");

        printf("7.Double Quote->\\\':\n");
        printf("\'\n\n");

        printf("8.Alert->\\a:\n");
        printf("\a\n"); //may beep if supported.

        return 0;


}
