#include <stdio.h>
#include <stdlib.h>

int main()
{
    char m[5],n[5];
    int a,b,c,d,p;
    printf("Set range of first Variable :\n");
    scanf("%[^\n]%*c",m);
    printf("Set range of second Variable :\n");
    scanf("%[^\n]%*c",n);
    a=m[0];
    b=m[3];
    c=n[0];
    d=n[3];
    if (b>a||d>c)
    {
        p=(b-a)*(d-c);
    printf("possible no of unique questions is %d ",p);
    }
    else printf("set range properly");
    return 0;
}
