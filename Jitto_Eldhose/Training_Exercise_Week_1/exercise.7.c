#include <stdio.h>

int main()
{
    int x,r,c,s=0;
    int arr[100][100];
    printf("Enter the number of rows\n");
    scanf("%d",&r);
    printf("Enter the number of columns\n");
    scanf("%d",&c);
    printf("Enter the seat number\n");
    scanf("%d",&x);
    for (int i=0;i<r;i++)
        {
            for (int j=0;j<c;j++)
                {
                    s=s+1;
                    arr[i][j]=s;
                }
        }

    for (int i=0;i<r;i++)
        {
            for (int j=0;j<c;j++)
                {
                 if (arr[i][j]==x)
                   { printf("Row number of the seat location : %d\n",i+1);
                     printf("\nColumn number of the seat location : %d\n",j+1);
                   }
                }
        }

    return 0;
}
