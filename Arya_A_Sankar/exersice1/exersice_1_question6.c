#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x,y,z,l,m,n,t;
    printf("time taken in mins to solve one aptitude question\n",x);
    scanf("%d",&x);
    printf("time taken in mins to solve one Logical Reasoning question \n",y);
    scanf("%d",&y);
    printf("time taken in mins to solve one Debugging question \n",z);
    scanf("%d",&z);
    printf("number of aptitude questions\n",l);
    scanf("%d",&l);
    printf("number of Logical Reasoning questions\n",m);
    scanf("%d",&m);
    printf("number of Debugging questions \n",n);
    scanf("%d",&n);

    t = (x*l) +(y*m) +(z*n);

    printf("total time taken to slove all the questions %d\n",t);
    return 0;
}