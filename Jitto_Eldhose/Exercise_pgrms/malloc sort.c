#include <stdio.h>

#include<stdlib.h>
int main()
{
      int *ptr,n,temp;
      printf("Enter the total numbers : ");
      scanf("%d",&n);
      ptr=(int *)malloc(n*sizeof(int));
      printf("\nEnter %d Numbers: \n",n);
      for(int i=0;i<n;i++)
      {
            scanf("%d", (ptr+i));
      }
      for(int i=0;i<n;i++)
      {
            for(int j=i+1;j<n;j++)
            {
                  if(*(ptr+i)>*(ptr+j))
                  {
                        temp=*(ptr+i);
                        *(ptr+i)=*(ptr+j);
                        *(ptr+j)=temp;
                  }
            }
      }
      printf("\nAfter Sorting in Ascending Order: \n");
      for(int i=0;i<n;i++)
      printf("\n%d",*(ptr+i));
      return 0;
}
