
#include <stdio.h>
#include <string.h>
struct class
{
    int age;
    char name[50];
}c;
int main()
{
    c.age=10;
    strcpy(c.name,"Devu");
    printf("Nmae is %s\n",c.name);
    printf("Age is %d\n",c.age);
    return 0;
}
