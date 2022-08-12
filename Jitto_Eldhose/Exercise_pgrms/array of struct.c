
#include <stdio.h>
struct details
{
    char name[50];
    int age;
};
int main()
{
    struct details d[3]
    ={ {"vasu",10},
     {"baby",12},
     {"geethu",12} };
    for(int i=0;i<3;i++)
    {
        printf("%d name :%s \n",i+1,d[i].name);
        printf("Age : %d",d[i].age);
    }
    return 0;
}
