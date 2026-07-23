#include <stdio.h>

//function Declaration
void greet();

int main() {
    greet();       //function call
    greet();
    greet();
    return 0;
}

    //function Definition
void greet() {
    printf("Hello! Welcome to c programming.\n");
}
