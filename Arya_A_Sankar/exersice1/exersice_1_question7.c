#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
     int seat,n,m,x=0;
     int a[15][15];
     printf("enter number of rows\n");
     scanf("%d",&n);
     printf("enter number of columns\n");
     scanf("%d",&m);
    // printf("a[%d][%d]\n",n,m);
     printf("enter seat number");
     scanf("%d",&seat);

   for(int i=1; i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            x=(x+1);
            a[i][j]=x;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]==seat)
                printf("\n%d\n%d",i,j);
        }
    }

    return 0;
}