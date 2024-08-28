#include <stdio.h>
int main(void) 
{
const long x = 15;
const long *p = &x;
char *const pc = "hello";
printf("adress: %p, value: %ld\n", p , *p);
printf("adress: %p, value: %s\n", pc , pc); 

    return 0;
}
