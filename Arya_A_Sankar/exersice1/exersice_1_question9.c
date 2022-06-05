#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int A,L,D,P,x;
   // x = A+ L+ D+ P;
   // P = L+(2*A);
   // L = D-5;
   // D = 20 + A;

    printf("x\n");
    scanf("%d",&x);
     A = (x-50)/6;
    printf("%d\n",A);
     L = A + 15;
    printf("%d\n",L);
     D = 20 + A;
    printf("%d\n",D);
     P = (A + 15 )+(2*A);
    printf("%d\n",P);
return 0;
}