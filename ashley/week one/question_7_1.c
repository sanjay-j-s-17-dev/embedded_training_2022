#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,c,s,x,i,j;
    int a[100][100];
    printf("enter no of rows :\n");
    scanf("%d",&r);
    printf("enter no of coloumns :\n");
    scanf("%d",&c);
    printf("enter seat number :\n");
    scanf("%d",&s);

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            x=x+1;
            a[i][j]=x;
        }

    }
    for(i=0;i<r;i++)
        {
        for(j=0;j<c;j++){
            if(a[i][j]==s){
    printf("row is :%d\n",i+1);
    printf("column is :%d",j+1);
}
}
        }


    return 0;
}
