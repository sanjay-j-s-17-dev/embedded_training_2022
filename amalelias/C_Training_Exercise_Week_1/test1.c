#include<stdio.h>
#include<string.h>
int main()
{
    int duration,mark=0;
    char name[50],topic[50];
    printf("Name");
    gets(name);
    printf("Topic");
    gets(topic);
    printf("Duration");
    scanf("%d",&duration);
    printf("mark");
    scanf("%d",&mark);

    printf("\n WELCOME TO ONLINE EXAM \n");
    printf("%s is a %s exam for %d marks and the duration is %d mins ",name,topic,mark,duration);

}
