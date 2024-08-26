#include <stdio.h>
int main(void) 
{ 
    //обмен через 3ю переменную
    int a1 = 10;
    int b2 = 5;
    int c3 = a1;
 a1 = b2 ;
b2 = c3;
printf("a1, b2 = %d, %d", a1, b2);
//обмен без третьей переменной
int f = 1;
int g = 10;
f = f + g;
g = f - g;
f = f - g; 
printf("f, g = %d, %d", f, g);
    //обмен через выражение
    int a = 10; 
    int b = 5;     
b = b + (a=b);
    printf("a, b = %d, %d", a, b);
    //Обмен через операцию XOR
    int x = 10;
    int y = 1;
    x = x ^ y; 
    y = x ^ y;
    x = x ^ y;
    printf("x, y = %d, %d", x, y);
return 0;
}
