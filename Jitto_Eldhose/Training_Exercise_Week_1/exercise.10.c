#include<stdio.h>
int main() 
{
    int a, a1, a2, b, b1, b2, n;
    printf("Enter the range of first variable :\n");
    scanf("%d\t%d",& a1, &a2);
    printf("Enter the range of second variable :\n");
    scanf("%d\t%d", &b1, &b2) ;
    if(a1<a2)
        {
            a=(a2-a1)+1;
        }
    if(a2<a1)
        {
            a=(a1-a2)+1;
        }
    if(b1<b2)
        {
            b=(b2-b1)+1;   
        }
    if(b2<b1)
        {
            b=(b1-b2)+1;
        }
    n=a*b;
    printf("Total number of unique questions :\n%d", n);
    return 0;
}