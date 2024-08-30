#include <stdio.h>
void funk(int x)
{
x = x + 5;
printf("%d\n", x);
}
int main(void) 
{
 funk(5);
    return 0;
}
