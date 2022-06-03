#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,capacity;
    char name[50],venue[50],date[50],time[50];
    char ch='-';
    printf("\n WELCOME TO ONLINE EXAM \n");
    printf("Name\n");
    gets(name);
    printf("Venue\n");
    gets(venue);
    printf("capacity\n");
    scanf("%d",&capacity);
    printf("Date\n");
    scanf("%[^\n]*c",date);
    printf("time\n");
    gets(time);
    {
     for(i=0;i<10;i++)
    {
        if(date[i]==' ')
        {
            date[i]=ch;
        }
    }

printf("%s is conducting %s exam on %s at %s hrs and the number of entries are limited to %d  ",venue,name,date,time,capacity);
}



    return 0;
}
