#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char Name[50];
    char Topic[50];
    int Duration,Marks;
    printf("Welcome to Online Exam\n");
    printf("Name\n");
    gets(Name);
    printf("Topic\n");
    gets(Topic);
    printf("Duration\n");
    scanf("%d",&Duration);
    printf("Marks\n");
    scanf("%d",&Marks);
    printf("%s is a %s exam for %d marks and the duration is %d mins",Name,Topic,Marks,Duration);
    return 0;
}