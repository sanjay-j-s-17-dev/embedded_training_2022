/*Assume 1: Total score for Aptitude is 20 Logical Reasoning is 30 Debugging is 30 Programming is 40
Assume 2: Weightage for Aptitude is 10 Logical Reasoning is 15 Debugging is 15 Programming is 60
Input format: First input is an integer that corresponds to the score in Aptitude Second input is an integer that corresponds to the score in Logical Reasoning Third input is an integer that corresponds to the score in Debugging Fourth input is an integer that corresponds to the score in Programming
Output Format: First input is a the total original score out of 120. Second input is a the total weighted score out of 120.
Sample Input: 15 20 15 20
Sample */
#include<stdio.h>
#include<stdlib.h>
float exam(float a,float b,float c)
{
 float w;
 w=a*c/b;
 return w;
}
int main()
{
 float wt=0,n;
 int apt,lr,deb,pro;
 int total;
 int  w_apt=10,w_lr=15,w_deb=15,w_pro=60,tapt=20,tlr=30,tdeb=30,tpro=40;
     printf("aptitude=");
    scanf("%d",&apt);
    printf("Logical reasoning=");
    scanf("%d",&lr);
    printf("debugging=");
    scanf("%d",&deb);
    printf("programming=");
    scanf("%d",&pro);
    total=apt+lr+deb+pro;
    n= exam(apt,tapt,w_apt);
    wt=wt+n;
    n= exam(lr,tlr,w_lr);
    wt=wt+n;
    n= exam(deb,tdeb,w_deb);
    wt=wt+n;
    n= exam(pro,tpro,w_pro);
    wt=wt+n;
    printf(" total score out of 120=%d\n",total);
    printf("weighted score out of 120=%f\n",wt);
    return 0;
}
