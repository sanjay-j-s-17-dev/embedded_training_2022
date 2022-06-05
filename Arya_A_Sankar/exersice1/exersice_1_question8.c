#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int girls,boys;
    printf("number of boys\n");
    scanf("%d",&boys);
    girls = (boys-2)/3;
    printf("number of girls is %d",girls);
    return 0;
}