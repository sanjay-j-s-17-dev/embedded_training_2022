#include<stdio.h>
#include<stdlib.h>
int main(){
    int apt,log,deb,pro,x;

    printf("Total marks: ");
    scanf("%d",&x);

    deb = (x+70)/6;
    apt = deb-20;
    log = deb-5;
    pro = log+(2*apt);

    printf("\nAptitude split-up marks: %d",apt);
    printf("\nLogical reasoning split-up marks: %d",log);
    printf("\nDebugging split-up marks: %d",deb);
    printf("\nProgramming split-up marks: %d",pro);

    return 0;
    }
