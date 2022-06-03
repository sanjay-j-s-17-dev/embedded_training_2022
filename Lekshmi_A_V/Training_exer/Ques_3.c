#include<stdio.h>
#include<stdlib.h>
int main(){
  int apt,log,deb,pro,tot;
  printf("Aptitude\n");
  scanf("%d",&apt);
  printf("Logical Reasoning\n");
  scanf("%d",&log);
  printf("Debugging\n");
  scanf("%d",&deb);
  printf("Programming\n");
  scanf("%d",&pro);

tot=apt+log+deb+pro;

printf("Total score is %d",tot);
return 0;
}
