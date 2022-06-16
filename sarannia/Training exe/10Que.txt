#include <stdio.h>
int main()
{
  int i,j,k,count=0;
  int num1, num2, num3, num4;
  printf("Enter the range of first variable: ");
  scanf("%d", &num1);
  scanf("%d", &num2);
  printf("Enter the range of second variable: ");
  scanf("%d", &num3);
  scanf("%d", &num4);
    for(i=num1;i<=num2;i++)
    {
	for(j=num3;j<=num4;j++)
	{
		k=i+j;
		count++;
     }
     }
  printf("\nTotal number of unique questions : %d",count);
  return 0;
}
