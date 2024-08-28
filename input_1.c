#include <stdio.h>
int main(void) 
{ 
 int x;
 int y;
 double z;
 printf("input x, y, z:");
 scanf("%d, %d, %lf", &x, &y, &z);

printf("x= %d \ty= %d \tz= %.2lf", x ,y ,z);
    return 0;
}