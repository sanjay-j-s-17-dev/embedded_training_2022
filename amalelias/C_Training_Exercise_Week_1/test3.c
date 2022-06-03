#include<stdio.h>
#include<string.h>

 int main()
 {
     int apt,lr,pro,total;
    printf("aptitude=");
    scanf("%d",&apt);
    printf("Logical reasoning=");
    scanf("%d",&lr);
    printf("programming=");
    scanf("%d",&pro);
    total=apt+lr+pro;
    printf("total score=%d",total);
     return 0;
 }

