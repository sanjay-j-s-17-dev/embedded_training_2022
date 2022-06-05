#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,l,d,p,total;
    printf("Enter score \n");
    printf("Aptitude\n");
    scanf("%d",&a);
    printf("logical reasoning\n");
    scanf("%d",&l);
    printf("Debugging\n");
    scanf("%d",&d);
    printf("Programming\n");
    scanf("%d",&p);
    total = a+l+d+p;
    printf("Total score is %d",total);

    return 0;
}
