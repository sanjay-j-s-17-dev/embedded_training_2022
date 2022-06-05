#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a_tot,a_obt,l_tot,l_obt,d_tot,d_obt,p_tot,p_obt,a_per,l_per,d_per,p_per;
    printf("Upload marks\nAptitude :\nTotal\n");
    scanf("%d",&a_tot);
    printf("Obtained\n");
    scanf("%d",&a_obt);
    printf("Logical Reasoning :\nTotal\n");
    scanf("%d",&l_tot);
    printf("Obtained\n");
    scanf("%d",&l_obt);
    printf("Debugging :\nTotal\n");
    scanf("%d",&d_tot);
    printf("Obtained\n");
    scanf("%d",&d_obt);
    printf("Programming :\nTotal\n");
    scanf("%d",&p_tot);
    printf("Obtained\n");
    scanf("%d",&p_obt);
    a_per = (a_obt/a_tot)* 100;
    l_per = (l_obt/l_tot)* 100;
    d_per = (d_obt/d_tot)* 100;
    p_per = (p_obt/p_tot)* 100;
    printf("Aptitude %% is %d\n",a_per);
    printf("Logical Reasoning %% is %d\n",l_per);
    printf("Debugging %% is %d\n",d_per);
    printf("Programming %% is %d\n",p_per);
    return 0;
}
