# include <stdio.h>

int main () {
    printf ("demonstrating Escape sequence in c\n\n");

    printf("1. Newline ->Hello\\nworld:\n");
    printf (" Hellow\nworld\n\n");

    printf("2.Tab ->Hello\\tworld :\n");
    printf ("Hello\t world\n\n");

    printf("3.backspace -> Helloo\\bworld:\n");
    printf("Helloo\bworld\n\n");

    printf(" 4.carriage Return -> Hello world \\rHi:\n");
    printf("Helloo world\rHioo\n\n");

    printf("5.Backslash -> \\\\:\n");
    printf("\\\n\n");

    printf("6.single Quote -> \\\':\n");
    printf("\'\n\n");

    printf("7.Double Quote -> \\\":\n");
    printf("\"\n\n");

    printf("8.ALert -> \\a:\n");
    printf("8.Alert-> \\a:\n");

    return 0;
}
