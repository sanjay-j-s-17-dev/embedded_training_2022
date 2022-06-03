#include <stdio.h>
#include <stdlib.h>
struct exam{
char name[50],venue[50];
int capa,day,month,year,hrs,mins;
}
s;

int main(){
printf("Welcome to Online Exam\n");
printf("Name \n");
scanf(" %[^\n]",s.name);
printf("Venue \n ");
scanf(" %[^\n]",s.venue);
printf("Capcity \n ");
scanf("%d",&s.capa);
printf("Date (day month year)\n ");
scanf("%d %d %d",&s.day,&s.month,&s.year);
printf("Time (hrs mins) \n ");
scanf("%d %d",&s.hrs,&s.mins);

printf("\n%s  is conducting %s exam on %d-%d-%d at %d.%d hrs and the number of entries are limited to %d.",s.venue,s.name,s.day,s.month,s.year,s.hrs,s.mins,s.capa);
return 0;

}
