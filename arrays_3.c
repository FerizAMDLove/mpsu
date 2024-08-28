#include <stdio.h>
int main(void) 
{ 
int x[] = {1,2,3,4}; 
size_t size = sizeof(x) / sizeof(int);
for(size_t z =0; z < size; z++)
{
x[z]=x[z]*2;
}
for(size_t y=0; y<size; y++)
{
    printf("%d\n",x[y]);
}
    return 0;
}