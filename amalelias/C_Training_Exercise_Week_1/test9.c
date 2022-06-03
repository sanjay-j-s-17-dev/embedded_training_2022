/*Disha’s mentor asked her for mark split-up for her online exam
where marks for Programming is marks in Logical Reasoning + twice marks in Aptitude,
 LR will be 5 less than Debugging, and Debugging is 20 more than Aptitude. Given x as total,
  find the split-up marks for Aptitude, Logical Reasoning, Debugging, and Programming.

Input Format: Input is an integer that corresponds to x.
OutputFormat: First output is an integer that corresponds to Aptitude Split-up. Second output is an integer that corresponds to Logical Reasoning Split-up. Third output is an integer that corresponds to Debugging Split-up. Fourth output is an integer that corresponds to Programming Split-up. Assume: all Outputs will be integers.
Sample Input: 110 Sample Output: 10 25 30 45*/
#include<stdio.h>

int main()
{
    int x;
    int apt,deb,lr,pro;
    printf("enter the total score=");
    scanf("%d",&x);
    /*pro=lr+2apt
lr=deb-5
deb=apt+20
x=total
x=lr+deb+apt+pro
  =(apt+20)-5+apt+20+apt+lr+2apt=apt+20-5+apt+20+apt+(deb-5)+2apt
  =apt+20-5+apt+20+apt+apt+15+2apt
 x =6apt+50
apt=(x-50)/6 */
    apt=(x-50)/6;
    deb=apt+20;
    lr=deb-5;
    pro=lr+(2*apt);
printf("apptitude=%d \n",apt);
printf("logical reasoning=%d \n",lr);
printf("debugging=%d \n",deb);
printf("programming=%d \n",pro);
return 0;
}

