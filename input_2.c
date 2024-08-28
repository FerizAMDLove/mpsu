#include <stdio.h>
int main(void) 
{ 
 char buffe[10];
 int z;
 printf("input:");
fgets (buffe, 10 , stdin);
sscanf(buffe, "%d", &z);
printf("z=%d",z);


    return 0;
}