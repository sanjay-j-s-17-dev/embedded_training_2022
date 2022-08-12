

#include <stdio.h>

int main()
{
    int a[10],temp;
    printf("Enter 10 elements of array\n");
    for(int i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("Elements of real array\n");
    for(int i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
    for (int i=0;i<10;i++)
    {
        for (int j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Array after sort");
     for(int i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
}
