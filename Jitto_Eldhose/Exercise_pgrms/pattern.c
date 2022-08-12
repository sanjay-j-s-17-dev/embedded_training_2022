#include <stdio.h>

int main()
{
int n,i=1;
    printf("enter the number\n");
    scanf("%d",&n);
    for (int j=0;j<n;j++)
    {
       if(i==1)
       {
            for(i=0;i<n;i++)
           {
               printf("%d",i+1);
           }
       }
       else
       {
           for(i=n+1;i>1;i--)
           {
               printf("%d",i-1);
           }
       }
       printf("\n");
    }

    return 0;
}