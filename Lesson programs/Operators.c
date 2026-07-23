#include <stdio.h>

   int main (){
   int a=10, b= 3 ,result;
   char ch ='A';

   //Arithmentic operators
   printf ("Arithmetic :%d+%d=%d\n",a,b,a+b);

   //Relational operators
   printf ("Relational:%d>%d=%d\n",a,b,a>b);

   //Logical operators
   printf ("Logical :(%d>%d)&&(%d<%d)=%d\n",a,b,a,20,(a>b)&&(a<20));

   //Bitwise opertors
   printf (":%d&%d=%d\n",a,b,a&b);

   //assigenment operators
   result=a;
   result =b;
   printf ("Assignment: result =b->%d\n",result);

   //Unary operator
   printf ("Unary:++a=%d,--b=%d\n",++a,--b);

   //Ternary operator
   printf("Ternary:(a>b?a:b=%d\n",(a>b)?a:b);

   //Miscellaneous
   printf("sizeof (int=%zu\n",sizeof (int));
   printf ("Character ch=%c,ASCII=%d\n",ch,ch);

   return 0;
   }
