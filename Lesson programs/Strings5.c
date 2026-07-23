#include <stdio.h>
#include <ctype.h>    //For character testing fuctions

int main() {
    char str[100];
    int i;

    printf("Enter any  String: ");
    gets(str); //use fgets in modern compilers

    printf("\nAnalyzing the string: \n");

    for(i = 0; str[i] != '\0'; i++) {
        if(islower(str[i]))
            printf("'%c' is a lowercase letter.\n", str[i]);
        else if(isupper(str[i]))
            printf("'%c' is a uppercase letter.\n", str[i]);
        else if(isdigit(str[i]))
            printf("'%c' is a digit.\n", str[i]);
        else if (isalnum(str[i]))
            printf("'%c' is alphanumeric.\n", str[i]);
        else if(isspace(str[i]))
            printf("'%c' is a whitespace character.\n", str[i]);
        else if (ispunct(str[i]))
            printf("'%c' is a punctuation mark.\n", str[i]);
        else if (isprint(str[i]))
            printf("'%c' is printable.\n", str[i]);
        else
            printf("'%c' is a control or a special character.\n", str[i]);
    }

    return 0;
    }



