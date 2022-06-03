#include<stdio.h>
#include<stdlib.h>
int main()
{
 int l,m,n,time;
 int x,y,z;
 printf("time taken for complete 1 aptitude  question=");
    scanf("%d",&x);
    printf(" time taken for complete 1 Logical reasoning question=");
    scanf("%d",&y);
    printf("time taken for complete 1 debugging question=");
    scanf("%d",&z);
     printf("no of aptitude  questions=");
    scanf("%d",&l);
    printf(" no of Logical reasoning  questions=");
    scanf("%d",&m);
    printf("no of debugging questions=");
    scanf("%d",&n);
    time=((l*x)+(m*y)+(n*z));
    printf("total time taken=%d",time);
    return 0;
}

