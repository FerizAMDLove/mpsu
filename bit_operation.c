#include <stdio.h>
int main(void)
{
int a = 13; 
  int bit = (a >> 1) & 1; 
    int bit2 = (a >> 2) & 1;
    int b = bit ^ bit2;
    int result = a ^ (b << 1 | b << 2);
    printf("Result: %d\n", result);
    return 0;
}   // 1101 - 13
//1011 - 11
//0110 - 6 бит 1
//0011 - 3 бит 2
//0010 + 0100 = 0110 исключение 1101 ---= 1011