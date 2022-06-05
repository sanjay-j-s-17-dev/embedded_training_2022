#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,c,s,q,rem;
    printf("enter no of rows :\n");
    scanf("%d",&r);
    printf("enter no of coloumns :\n");
    scanf("%d",&c);
    printf("enter seat number :\n");
    scanf("%d",&s);
    rem= s%c;
    q=s/r;
    if (r=c)  //if rows and coloumn is equal
    {
    q=q+1;
    if (rem==0)
    rem=c;
    else rem=rem;
    }
    else if(r<c)  //if no of rows < no of coloumns
    {
    if(rem==0)
       rem=c;
    else rem=rem;
    if(q==0)
       q=1;
    else q=q;
    }
    else if(r>c)  //if no of rows > no of rows
    {
    rem= s%r;
    q=s/c;
    if(q==0)
    q=1;
    else q=q;
    if(rem==0)
    rem=r;
    else rem=rem;
    }

    printf("\nyour row number is : %d\nyour coloumn number is : %d",q,rem);

    return 0;
}
