#include <stdio.h>
#include <stdlib.h>
int main()
{
    int b,g,rem;
    printf("No of boys in the hall : \n");
    scanf("%d",&b);
    g=(b-2)/3;
    rem=(b-2)%3;
    if (rem==0)
        printf("\nThe no of girls in the hall : %d",g);
    else printf("invalid no of boys");
    return 0;
}
