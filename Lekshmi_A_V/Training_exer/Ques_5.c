#include<stdio.h>
#include<stdlib.h>
int main(){

      float w_apt=10,w_log=15,w_deb=15,w_pro=60,tot_weig;
      int apt,log,deb,pro,tot_org;

      printf("Score in Aptitude : ");
      scanf("%d",&apt);
      printf("Score in Logical Reasoning : ");
      scanf("%d",&log);
      printf("Score in Debugging : ");
      scanf("%d",&deb);
      printf("Score in Programming : ");
      scanf("%d",&pro);

      tot_org=apt+log+deb+pro;
      float w1=(apt*w_apt);
      float w2=(log*w_log);
      float w3=(deb*w_deb);
      float w4=(pro*w_pro);

      tot_weig=(w1+w2+w3+w4)/100;

      printf("\nTotal original score out of 120 : %d",tot_org);
      printf("\nTotal weighted score out of 120 : %.2f",tot_weig);

return 0;
}
