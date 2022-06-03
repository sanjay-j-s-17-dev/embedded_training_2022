#include <stdio.h>

float calc(float m,float t)
{
    float r;
    r=(m/t)*100;
    return (r);
}
int main ()
{
    int a,at,l,lt,d,dt,p,pt;
    int o,ot;
    float ro;
    printf("Aptitude:\n");
    printf("Total\n");
    scanf("%d",&at);
    printf("Obtained\n");
    scanf("%d",&a);
    printf("Logical Reasoning:\n");
    printf("Total\n");
    scanf("%d",&lt);
    printf("Obtained\n");
    scanf("%d",&l);
    printf("Debugging:\n");
    printf("Total\n");
    scanf("%d",&dt);
    printf("Obtained\n");
    scanf("%d",&d);
    printf("Programming:\n");
    printf("Total\n");
    scanf("%d",&pt);
    printf("Obtained\n");
    scanf("%d",&p);

     ro=calc(a,at);
     printf("\nAptitude ratio is %.2f\n",ro);
     ro=calc(l,lt);
     printf("\nLogical Reasoning ratio is %.2f\n",ro);
     ro=calc(d,dt);
     printf("\nDebugging ratio is %.2f\n",ro);
     ro=calc(p,pt);
     printf("\nProgramming ratio is %.2f\n",ro);
     o=a+l+d+p;
     ot=at+lt+dt+pt;
     ro=calc(o,ot);
     printf("\nOverall ratio is %.2f\n",ro);

}
