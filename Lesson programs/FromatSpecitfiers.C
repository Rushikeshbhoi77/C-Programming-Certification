#include <stdio.h>

    int main (void) {

    int n=123;
    long int L=2000000000L ;
    float f=3.14159f;
    double d =2.718281828;
    char ch ='c';
    char name []="Ada";

    //printing different data types
    printf("int :%d\n",n);
    printf ("long:%1d\n",L);
    printf("float:%f\n",f);
    printf ("double:%1f\n",d);
    printf ("char:%c\n",ch);
    printf("string:%s\n",name);

    //width and precision
    printf("Pi(2decimals):%.2f\n",f);
    printf ("n right-alignedwidth 6:|%6d|\n",n);
    printf("n left -aligned width 6:|%6d|\n,n");

    //printing expressions
    printf ("2+3=%d\n",2+3);
    printf("Area 7x5=%d\n",7*5);

    return 0;
    }
