#include <stdio.h>
 int main()
{
    int x,rows,cols,k=0, a[100][100];
    printf("Enter the number of rows\n");
    scanf("%d",&rows);
    printf("Enter the number of columns\n");
    scanf("%d",&cols);
    printf("Enter the seat number\n");
    scanf("%d",&x);
    for (int i=0;i<rows;i++){
    for (int j=0;j<cols;j++)
    {
        k++;
        a[i][j]=k;
    }
    }
    for (int i=0;i<rows;i++){
    for (int j=0;j<cols;j++){
        if(a[i][j]==x)
{
    printf("Row number of the seat location : %d\n",i+1);
    printf("\nColumn number of the seat location : %d\n",j+1);
}
    }
        }
  return 0;
}
