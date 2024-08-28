#include <stdio.h>
int main(void) 
{
    int x = 15;
int *p;
p = &x;
printf("%p\n",(void*) p);
printf("%d", *p);
    return 0;
}
