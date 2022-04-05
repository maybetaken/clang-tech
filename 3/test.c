#include <stdio.h>
 
int main()
{
   int a = 21;
   int b = 10;
   int c ;
#if 0
   /*
   c = a + b;
   printf("Line 1 - c 的值是 %d\n", c );
   c = a - b;
   printf("Line 2 - c 的值是 %d\n", c );
   c = a * b;
   printf("Line 3 - c 的值是 %d\n", c );
   c = a / b;
   printf("Line 4 - c 的值是 %d\n", c );
   c = a % b;
   printf("Line 5 - c 的值是 %d\n", c );
      */
#endif
   c = a++;  // 赋值后再加 1 ，c 为 21，a 为 22
   printf("Line 6 - c 的值是 %d\n", c );
   c = a--;  // 赋值后再减 1 ，c 为 22 ，a 为 21
   printf("Line 7 - c 的值是 %d\n", c );


   c = ++a;  //先自加1， 然后再赋值。 a 22 c 22
   printf("value of c is %d, value of a is %d \n",c , a);

   c = --a; // 先自减1， 然后再赋值， a 21 , c 21
}