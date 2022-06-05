#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char Name[50];
    char Venue[50];
    int Capacity;
    char Date[15];
    float Time;
    printf("Welcome to Online Exam\n");
    printf("Name\n");
    gets(Name);
    printf("Venue\n");
    gets(Venue);
    printf("Capacity\n");
    scanf("%d",&Capacity);
    printf("Date\n");
    scanf("%s",Date);
    printf("Time\n");
    scanf("%f",&Time);
    printf("%s is conducting %s exam on %s at %f hrs and the number of entries are limited to %d",Venue,Name,Date,Time,Capacity);
    return 0;
}