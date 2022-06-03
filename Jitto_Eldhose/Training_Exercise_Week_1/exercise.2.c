#include<stdio.h>
#include<string.h>
int main()
{
    int capacity,i;
    char name[50],venue[50],date[50],bar='-';
    float time;
    printf("\n Welcome To Online Exam \n");
    printf("Name\n");
    gets(name);
    printf("Venue\n");
    gets(venue);
    printf("Capacity\n");
    scanf("%d",&capacity);
    printf("Date\n");
    gets(date);
    gets(date);
    for(i=0;i<10;i++)
    {
        if(date[i]==' ')
        {
            date[i]=bar;
        }
    }
    printf("Time\n");
    scanf("%f",&time);
    printf("%s is conducting %s exam on %s at %.2f hrs and the number of entries are limited to %d ",venue,name,date,time,capacity);

}
