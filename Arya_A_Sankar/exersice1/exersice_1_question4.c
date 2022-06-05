#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
float main()
{
    float Aptitude,Obtained;
    float Logical_Reasoning;
    float Debugging,Programming,Total;
    float Overall;
    printf("Aptitude\n");
    printf("Total\n");
    scanf("%f",&Total);
    printf("Obtained\n");
    scanf("%f",&Obtained);
    Aptitude = (Obtained/Total)*100;


    printf("Logical Reasoning\n");
    printf("Total\n");
    scanf("%f",&Total);
    printf("Obtained\n");
    scanf("%f",&Obtained);
    Logical_Reasoning = (Obtained/Total)*100;

    printf("Debugging\n");
    printf("Total\n");
    scanf("%f",&Total);
    printf("Obtained\n");
    scanf("%f",&Obtained);
    Debugging = (Obtained/Total)*100;


    printf("Programming\n");
    printf("Total\n");
    scanf("%f",&Total);
    printf("Obtained\n");
    scanf("%f",&Obtained);
    Programming = (Obtained/Total)*100;

    printf("Aptitude is %f\n",Aptitude);
    printf("Logical Reasoning is %f\n",Logical_Reasoning);
    printf("Debugging is %f\n", Debugging);
    printf("Programming is %f\n",Programming);

    Overall = ((Aptitude+Logical_Reasoning+Debugging+Programming)/400)*100;
    printf("Overall is %f",Overall);

    return 0;
}