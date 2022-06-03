#include<stdio.h>
 int main ()
 {
    int x,x1,x2,y,y1,y2,z;
    printf("enter the range of 1st variable :\n");
    scanf("%d\t%d",&x1,&x2);
    printf("enter the range of 2nd variable :\n");
    scanf("%d\t%d",&y1,&y2);
    if(x2>x1)
    {
        x=(x2-x1)+1;
        y=(y2-y1)+1;
        z=x*y;
        printf("total number of uniquw questions=%d\n",z);
    }
    else if(x1>x2)
    {
        x=(x1-x2)+1;
        y=(y1-y2)+1;
        z=x*y;
        printf("total number of uniquw questions=%d\n",z);
    }
    return 0;
 }
