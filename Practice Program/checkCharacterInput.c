#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if((ch>= 65 && ch <= 90)|| (ch >= 97 && ch <= 122)){
        printf("Entered Character is an alphabet");
    }else if (ch >= 48 && ch <= 57) {
        printf("Entered Character is a digit");
    }else{
        printf("Entered Character is a Special Symbol");
    }

    return 0;
}
