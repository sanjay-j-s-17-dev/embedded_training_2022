#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,a,p,l,d,rem;
    printf("Enter total marks : \n");
    scanf("%d",&x);
    a=(x-60)/6;
    rem=(x-60)%6;
    if (rem==0)
    {
    d=a+20;
    l=d-5;
    p=(l+2*a);
    printf("Aptitude Split-up : %d\nLogical reasoning Split-up : %d\nDebugging Split-up : %d\nProgramming Split-up : %d\n",a,l,d,p);
    }
    else
        printf("invalid Total");
    return 0;
}
