#include <stdio.h>
#include <stdlib.h>

int main()
{   char name[20],topic[25],duration[12],marks[4];
    printf("Welcome To Online Exam\n Name \n");
    scanf("%[^\n]%*c",name);
    printf("Topic\n");
    scanf("%[^\n]%*c",topic);
    printf("Duration\n");
    scanf("%[^\n]%*c",duration);
    printf("marks\n");
    scanf("%[^\n]%*c",marks);
    printf("%s is a %s exam for %s marks and the duration is %s mins",name,topic,marks,duration);


    return 0;
}
