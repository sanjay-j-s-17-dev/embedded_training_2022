#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int Aptitude;
    int Logical_Reasoning;
    int Debugging,Programming,total;
    printf("Aptitude\n");
    scanf("%d",&Aptitude);
    printf("Logical Reasoning\n");
    scanf("%d",&Logical_Reasoning);
    printf("Debugging\n");
    scanf("%d",&Debugging);
    printf("Programming\n");
    scanf("%d",&Programming);
    total = Aptitude+Logical_Reasoning+Debugging+Programming;
    printf("Total Score is %d",total);
    return 0;
}