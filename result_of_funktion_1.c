#include <stdio.h>
int funk(int x, int y)
{
printf("x=%d\n", x);
printf("y=%d\n", y);
if(x>y)
return x - y;
else 
return x + y; 
}
int main(void) 
{
 int res = funk(1 , 2);
 printf("result:%d\n", res);
 int res2 = funk(4 , 2);
 printf("result:%d\n", res2);
    return 0;
}
