#include <stdio.h>
int main(void) 
{ 
    int x = 7;
    for(int y = 0; y < x; y++)
    {
        for(int z = 0; z< x; z++)
        {
            if(z==y || z== x-y-1|| y==0 || y==6)
            printf("*");
            else 
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}