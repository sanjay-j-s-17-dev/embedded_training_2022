/*Welcome To Online Exam
Name Test Your Skills
Venue Scaleneworks bangalore
Capacity 250
 Date 10 10 2017
 Time 10.00

 Scaleneworks bangalore is conducting Test Your Skills exam on 10-10-2017 at 10.00 hrs and the number of entries are limited to 250.*/
#include<stdio.h>
#include<string.h>
int main()
{
    int i,capacity;
    char name[50],venue[50],date[50];
    float time;
    char ch='-';
    printf("\n WELCOME TO ONLINE EXAM \n");
    printf("Name\n");
    gets(name);
    printf("Venue\n");
    gets(venue);
    printf("capacity\n");
    scanf("%d",&capacity);
    printf("Date\n");
    gets(date);
    gets(date);
    printf("time\n");
    scanf("%f",&time);
    for(i=0;i<strlen(date);i++)
    {
        if(date[i]==' ')
        {
            date[i]=ch;
        }
    }

printf("%s is conducting %s exam on %s at %.2f hrs and the number of entries are limited to %d  ",venue,name,date,time,capacity);
}

