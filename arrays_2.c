#include <stdio.h>
int main(void) 
{ 
int x[] = {1,2,3,4}; 
x[0] = x[0]*2;
x[3] = x[3]*2;
size_t size = sizeof(x) / sizeof(int);
for(size_t y=0; y<size; y++)
{
    printf("%d\n",x[y]);
}
    return 0;
}