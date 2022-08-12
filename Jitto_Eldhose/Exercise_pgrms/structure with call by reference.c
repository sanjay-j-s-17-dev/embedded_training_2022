#include <stdio.h>
struct details
{
    char name[50];
    int age;
}d;
void view(struct details *d1)
{
    d1->age=10;
    printf("Name : %s\n",d1->name);
    printf("Age : %d\n",d1->age);
    
}
int main()
{
    printf("Enter name\n");
    scanf("%s",d.name);
    printf("Enter Age \n");
    scanf("%d",&d.age);
    view(&d);
    printf("%d",d.age);
    return 0;
}
