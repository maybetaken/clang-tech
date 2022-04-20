#include <stdio.h>

#define true 1
#define false 0

/*
   replace value of a with 3 times of its own.
*/
void replace(int* pa);

int threeTimes(int a);

int main()
{   
   int x = 10;
   printf("value of x is %d\n",x);

   // replace(&x);
   x = threeTimes(x);

   printf("value of x is %d\n",x);

   return 0;
}


void replace(int* pa){
   *pa *= 3; // *pa = *pa * 3
}

int threeTimes(int a){
   return 3*a;
}

/*
   auto lamda  = [&](int a , int b) -> bool {};
                = [](){};
*/