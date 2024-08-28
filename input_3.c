#include <stdio.h>
int main(void) 
{
    int age;
    char name[20];
    printf("Your age: ");
    scanf("%d", &age);
    getchar();
    printf("Your name: ");
    fgets(name, 20, stdin);
    
    printf("Name: %s",name);
    printf("Age = %d",age);
    return 0;
}
