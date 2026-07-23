#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    char str2 [20];

    //strlen() - gives length of string (excluding '\0')
    printf("length of str1 = %1u\n", strlen (str1));

    //strcpy() - copies one string to another
    strcpy(str2, str1);
    printf("After strcpy, str2 = %s\n", str2);

    //strncpy() - copies only first in characters
    strncpy (str2, "World", 3);
    str2[3] = '\0'; //must manually add null character
    printf("After strncpy (3 chars); str2 = %s\n", str2);

    //strcat() - joins two strings
    char str3[40] = "Good ";
    strcat(str3, "Morning");
    printf("After strcat, str3 = %s\n", str3);

    //strncat() - joins only n characters from second string
    char str4[40] = "C";
    strncat(str4, "ProgrammingLanguage", 6);
    printf("After strncat(6); str4 = %s\n", str4);

    //strcmp() - compares two strings
    printf("strcmp(\"abc\", \"abd\") = %d\n", strcmp("abc", "abd"));
        printf("strcmp(\"abc\", \"abc\") = %d\n", strcmp("abc", "abc")); //0

        //strcmp() - compares only first n characters
        printf("strcmp(\"abcdef\", \"abcxyz\", 3) = %d\n", strncmp("abcdef", "abcxyz", 3));

        return 0;

}
