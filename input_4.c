#include <stdio.h>
int main(void) 
{
    float width;
    float height;
    printf("input width: ");
    scanf("%f", &width);
    printf("input height: ");
    scanf("%f", &height);
    float S = width*height;
    printf("square: %.3f",S);
    return 0;
}
