#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20],venue[25],date[12],capacity[4],time[7];
    printf("Welcome To Online Exam\n Name \n");
    scanf("%[^\n]%*c",name);
    printf("venue\n");
    scanf("%[^\n]%*c",venue);
    printf("capacity\n");
    scanf("%[^\n]%*c",capacity);
    printf("Date\n");
    scanf("%[^\n]%*c",date);
    printf("Time\n");
    scanf("%[^\n]%*c",time);
    printf("%s is conducting %s exam on %s at %s and the number of entries are limited to %s.",venue,name,date,time,capacity);


    return 0;
}
