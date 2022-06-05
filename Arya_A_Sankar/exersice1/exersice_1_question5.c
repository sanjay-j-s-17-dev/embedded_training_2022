#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a = 20,l = 30, d = 30, p = 40;
    float aptitude,logical_reasoning,debugging,programming;
    float apt,lr,debg,prgm;

    printf("score for aptitude in 20\n");
    scanf("%f",&aptitude);
    apt=(aptitude/a)*10;
    printf("score for aptitude in 10 : %f\n",apt);

    printf("score for logical reasoning in 30\n");
    scanf("%f",&logical_reasoning);
    lr = (logical_reasoning/l)*15;
    printf("score for logical reasoning  in 15 : %f\n",lr);

    printf("score for debugging in 30\n");
    scanf("%f",&debugging);
    debg = (debugging/d)*15;
    printf("score for debugging in 15 : %f\n",debg);

    printf("score for programming in 40\n");
    scanf("%f",&programming);
    prgm= (programming/p)*60;
    printf("score for programming in 60 : %f\n",prgm);

   int total = aptitude+logical_reasoning+debugging+programming;
   float t = apt+lr+debg+prgm;

   printf("%d is total score out of 120\n",total);
   printf("%f is total weighted score out of 120",t);
    return 0;
}