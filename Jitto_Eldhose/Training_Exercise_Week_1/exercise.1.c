#include<stdio.h>
#include<string.h>
int main()
{
    int duration,marks=0;
    char name[50],topic[50];
    printf("\n Welcome To Online Exam \n");
    printf("Name\n");
    gets(name);
    printf("Topic\n");
    gets(topic);
    printf("Duration\n");
    scanf("%d",&duration);
    printf("Marks\n");
    scanf("%d",&marks);
    printf("%s is a %s exam for %d marks and the duration is %d mins ",name,topic,marks,duration);

}