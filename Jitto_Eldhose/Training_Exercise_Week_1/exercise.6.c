#include <stdio.h>

int calc(int a,int b)
{
    int c;
    c=a*b;
    return (c);
}
int main()
{
    int x,y,z,l,m,n;
    int t,o=0;
    printf("Time taken in mins to solve one aptitude questions\n");
    scanf("%d",&x);
    printf("Time taken in mins to solve one Logical Reasoning questions\n");
    scanf("%d",&y);
    printf("Time taken in mins to solve one Debugging questions\n");
    scanf("%d",&z);
    printf("Number of aptitude questions\n");
    scanf("%d",&l);
    printf("Number of Logical Reasoning questions\n");
    scanf("%d",&m);
    printf("Number of Debugging questions\n");
    scanf("%d",&n);

    t=calc(x,l);
    o=o+t;
    t=calc(y,m);
    o=o+t;
    t=calc(z,n);
    o=o+t;

    printf(" Total time taken to solve all the questions\n%d min",o);
    return 0;
}
