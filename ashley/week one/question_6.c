#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,l,m,n,total;

    printf("Time taken for one aptitude question\n");
    scanf("%d",&x);
    printf("Time taken for one logical question\n");
    scanf("%d",&y);
    printf("time taken for one debugging question\n");
    scanf("%d",&z);
    printf("no of  aptitude question\n");
    scanf("%d",&l);
    printf("no of  logical question\n");
    scanf("%d",&m);
    printf("no of  debugging question\n");
    scanf("%d",&n);

    total=(x*l) + (y*m) +(z*n);
    printf("total time taken :%d",total);

    return 0;
}
