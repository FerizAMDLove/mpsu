#include <stdio.h>
int main(void) 
{
int x[] = {3,4,5,6,7};
int *p = x;
int *p3 = p+2;
int *p4 = p+3;
printf("%d,%d",*p3, *p4);
return 0;
}
