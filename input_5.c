#include <stdio.h>
int main(void) 
{
    float foot;
    printf("input foot: ");
    scanf("%f", &foot);
    float meter = foot/3.281;
    printf("meters: %.3f",meter);
    return 0;
}
