#include <stdio.h>
#include <stdlib.h>
struct exam{
	char name[50],topic[50];
	int durtn,marks;
	}
	s;
int main(){
	printf("Welcome to Online Exam\n");
	printf("Name \n ");
	scanf(" %[^\n]",s.name);
    printf("Topic \n ");
	scanf(" %[^\n]",s.topic);
	printf("Durtion \n ");
	scanf("%d",&s.durtn);
	printf("Marks \n");
	scanf("%d",&s.marks);
	printf("%s is a %s exam for %d marks and the duration is %d mins",s.name,s.topic,s.marks,s.durtn);
	return 0;
	}
