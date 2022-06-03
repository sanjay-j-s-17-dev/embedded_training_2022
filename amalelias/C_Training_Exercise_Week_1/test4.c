/*Sample Input and Output:
Aptitude: Total 20 Obtained 15
 Logical Reasoning: Total 25 Obtained 20
 Debugging: Total 25 Obtained 15
 Programming: Total 30 Obtained 20
 Aptitude % is 75.00 Logical Reasoning % is 80.00 Debugging % is 60.00 Programming % is 66.67 Overall % is 70.00*/
#include<stdio.h>
#include<string.h>

 int main()
 {
     float apt,lr,pro,deb,total,a,b,c,d,e;
    printf("aptitude=");
    scanf("%f",&apt);
    printf("Logical reasoning=");
    scanf("%f",&lr);
    printf("programming=");
    scanf("%f",&pro);
    printf("debugging=");
    scanf("%f",&deb);
    a=(apt*100/20);
    b=(lr*100/25);
    c=(deb*100/25);
    d=(pro*100/30);
    total=apt+lr+pro+deb;
    e=(total*100/100);
    printf(" %% aptitude %% is %f \n ",a);
    printf(" %% logical reasoning is %f \n",b);
    printf("%% debugging is %f \n ",c);
    printf("%% programming is %f \n ",d);
    printf("overall %% is %f \n ",e);
     return 0;
 }


