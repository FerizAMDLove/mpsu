#include <stdio.h>
int main(void) 
{
char x[] = "Hello C";
size_t size = sizeof x / sizeof x[0];
for(int i; i<size;i++)
{
   char *p = x+i;
  printf("%c",*p);
}
return 0;
}
