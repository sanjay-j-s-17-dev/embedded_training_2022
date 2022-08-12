
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr,n;
    printf("Enter the no to insert\n");
    scanf("%d",&n);
    ptr=(int *)malloc(n*(sizeof(int)));
    printf("Enter %d values\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("The values enterd\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",ptr[i]);
    }

    return 0;
}
