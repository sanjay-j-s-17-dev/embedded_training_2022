
#include<stdio.h>
 
typedef enum{Mon, Tue, Wed, Thur, Fri, Sat, Sun}week;
 
int main()
{
    week day;
    day = Wed;
    printf("%d",day);
    return 0;
}
