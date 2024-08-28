#include <stdio.h>
int main(void) 
{
int x = 15;
int *p;
p = &x;
printf("before: %d\n", *p);
x = x * 10;
printf("after: %d\n", *p);
//или 
int c = 15;
int *y;
y = &c;
printf("before2: %d\n", *y);
*y = 10;
printf("after2: %d", *y);
    return 0;
}
