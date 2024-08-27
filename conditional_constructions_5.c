#include <stdio.h>
int main(void) 
{ 
    int x = 5;
    int y = 10;
    int z = 15;
   if(x > y && x > z)
   printf("x is maximal (%d)", x);
   else if(y > x && y > z)
   printf("y is maximal (%d)", y);
    else if(z > x && z > y)
    printf("z is maximal(%d)", z);
    else if(z ==x ^ z==y ^ x == y)
    printf("2 or more maximal values");
    return 0;
}