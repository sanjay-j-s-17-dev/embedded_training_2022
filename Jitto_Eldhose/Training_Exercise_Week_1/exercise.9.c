#include <stdio.h>
                                            //from question
int main()                                  //p=l+2a
{                                           //l=d-5
    int x;                                  //d=20+a
    int a,d,l,p;                            //x=(l+(2*a))+d-5+20+a+a
    printf("INPUT :\n");                    //a=(x-50)/6
    scanf("%d",&x);
    a=(x-50)/6;
    d=20+a;
    l=d-5;
    p=l+(2*a);
    printf("\nAptitude Split-up : %d\n",a);
    printf("Logical Reasoning Split-up. : %d\n",l);
    printf("Debugging Split-up : %d\n",d);
    printf("Programming Split-up : %d\n",p);

    return 0;
}
