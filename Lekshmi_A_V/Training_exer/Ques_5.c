#include<stdio.h>
#include<stdlib.h>
int main(){

      int w_apt=10,w_log=15,w_deb=15,w_pro=60;
      int apt,log,deb,pro,tot_org;
      float tot_weig;
      printf("Score in Aptitude : ");
      scanf("%d",&apt);
      printf("Score in Logical Reasoning : ");
      scanf("%d",&log);
      printf("Score in Debugging : ");
      scanf("%d",&deb);
      printf("Score in Programming : ");
      scanf("%d",&pro);

      tot_org=apt+log+deb+pro;
      int w1=(apt*w_apt);
      int w2=(log*w_log);
      int w3=(deb*w_deb);
      int w4=(pro*w_pro);

      tot_weig=(w1+w2+w3+w4)/100;

      printf("\nTotal original score out of 120 : %d",tot_org);
      printf("\nTotal weighted score out of 120 : %2f",tot_weig);

return 0;
}
