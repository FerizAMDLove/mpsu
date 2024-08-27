#include <stdio.h>
int main(void) 
{ 
    int x = 5;
    switch(x)
    {
        case 4:
     printf("x equal [4,5,6] x = 4");
     break;
    case 5:
     printf("x equal [4,5,6] x = 5");
        break;
    case 6:
     printf("x equal [4,5,6] x = 6");
        break;
        default: 
        printf("x not equal [4,5,6]");
    }
    
    return 0;
}