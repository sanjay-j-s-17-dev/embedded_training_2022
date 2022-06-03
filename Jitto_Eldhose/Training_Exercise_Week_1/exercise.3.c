#include<stdio.h>
int main()
{
    int a,l,d,p,t;
    printf("Aptitude :\n");
    scanf("%d",&a);
    printf("Logical Reasoning :\n");
    scanf("%d",&l);
    printf("Debugging :\n");
    scanf("%d",&d);
    printf("Programming :\n");
    scanf("%d",&p);
    t=a+l+d+p;
    printf("\nTotal Score is %d",t);
}