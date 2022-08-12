/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char a[100],b[100];
    int n=0,m=0,l,j;
    printf("Enter the sring 1\n");
    scanf("%s",&a);
    printf("Enter the sring 2\n");
    scanf("%s",&b);
    for(int i=0;a[i]!='\0';i++)
    {
        n=n+1;
    }
    for(int i=0;b[i]!='\0';i++)
    {
        m=m+1;
    }
    l=m+n;
    for(int i=n;i<l;i++)
    {
        j=i-n;
            a[i]=b[j];
        
    }
printf(" the string jointed\n");
for(int i=0;i<l;i++)
{
    printf("%c",a[i]);
}
    return 0;
}
