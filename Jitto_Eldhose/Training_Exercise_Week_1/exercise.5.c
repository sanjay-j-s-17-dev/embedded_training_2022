#include <stdio.h>
#include <stdlib.h>

float calc (float m,float tm,float w)
{
    float r;
    r=m*w/tm;
    return(r);
}
int main()
{
   int a,ta=20,wa=10;
   int l,tl=30,wl=15;
   int d,td=30,wd=15;
   int p,tp=40,wp=60;
   int t;
   float h,f=0;
   printf("Score in Aptitude\n");
   scanf("%d",&a);
   h=calc (a,ta,wa);
   f=f+h;
   printf("Score in Logical Reasoning\n");
   scanf("%d",&l);
   h=calc (l,tl,wl);
   f=f+h;
   printf("Score in Debugging\n");
   scanf("%d",&d);
   h=calc (d,td,wd);
   f=f+h;
   printf("Score in Programming\n");
   scanf("%d",&p);
   h=calc (p,tp,wp);
   f=f+h;
   t=a+l+d+p;
   printf("Totalt score out of 120= %d\n",t);
   printf("Weighted score out of 120 = %.2f\n",f);

  return 0;

}
