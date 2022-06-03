#include<stdio.h>
#include<stdlib.h>
int main()
{
    int j,i,x,row ,coloum,a[100][100],k=0;
    printf("enter the no of rows=");
    scanf("%d",&row);
     printf("enter the no of coloum=");
    scanf("%d",&coloum);
     printf("enter the seat number=");
    scanf("%d",&x);
    for(i=0;i<row;i++)
    {
        for(j=0;j<coloum;j++)
        {
            k++;
            a[i][j]=k;

        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<coloum;j++)
        {
            if(a[i][j]==x)
            {
                printf("the no corresponding to the seat location=%d\n",i+1);
                printf("the no corresponding to the seat location =%d",j+1);

            }
        }
    }
    return 0;
}
