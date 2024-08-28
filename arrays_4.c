#include <stdio.h>
int main(void) 
{ 
int x[] = {1,2,3,4,5}; 
size_t size = sizeof(x) / sizeof(int);
int f = 4;
int m = 0;
for(size_t z =0; z < size; z++,f--)
{
    if(x[0] == 5 && x[1] == 4 && x[2] == 3 && x[3] == 2 && x[4] == 1) break;
m = x[z];
x[z]=x[f];
x[f]=m;

}
for(size_t y=0; y<size; y++)
{
    printf("%d\n",x[y]);
}
    return 0;
}