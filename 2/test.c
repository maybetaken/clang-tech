#include <stdio.h>
  
/*定义两个全局变量*/
int x=1;
int y=2;
int addtwonum();

char a = 'c';


int main(void)
{
    int result;
    result = addtwonum();
    printf("result 为: %d\n",result);
    return 0;
}