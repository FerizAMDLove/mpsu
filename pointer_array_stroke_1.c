#include <stdio.h>
int main(void) 
{
int x[] = {1,2,3,4,5,6,7,8,9,10};
for(int i=0; i<10; i++)
{
    int *v = x+i;
  printf("value: %d\n",*v);
}

    return 0;
}
