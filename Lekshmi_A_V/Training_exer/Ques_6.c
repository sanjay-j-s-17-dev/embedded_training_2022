#include<stdio.h>
#include<stdlib.h>
int main(){
   int x,y,z,l,m,n;

   printf("Time taken in mins to solve one aptitude question : ");
   scanf("%d",&x);
   printf("Time taken in mins to solve one logical reasoning question : ");
   scanf("%d",&y);
   printf("Time taken in mins to solve one debugging question : ");
   scanf("%d",&z);
   printf("Number of aptitude questions : ");
   scanf("%d",&l);
   printf("Number of logical reasoning questions : ");
   scanf("%d",&m);
   printf("Number of debugging questions : ");
   scanf("%d",&n);

   int tot_time = (x*l)+(y*m)+(z*n);

   printf("\nTotal time taken to solve all the questions : %d",tot_time);
   return 0;
   }
