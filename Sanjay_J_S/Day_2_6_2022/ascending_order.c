/*
 * =====================================================================================
 *
 *       Filename:  ascending_order.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  23/05/22 08:41:44 AM IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdlib.h>


#include <stdio.h>

int main()
{
    int arr[] = {5, 2, 8, 7, 1};
    arr[0] = 5;
    arr[1] = 2;
    arr[2] = 8;
    arr[3] = 7;
    arr[4] = 1;
    int temp = 0;

    int length = sizeof(arr)/sizeof(arr[0]);

    printf("Elements of original array: \n");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    // 5 2 8 7 1
    printf("\n");
    for (int i = 0; i < length; i++) { // i = 0; 0<5
        for (int j = i+1; j < length; j++) { // 4<5
           if(arr[i] > arr[j]) { // i,arr[0] = 2 j,arr[4] =1 ; 2>1
               temp = arr[i];
               // temp = 2
               // arr[i]= 2
               arr[i] = arr[j];
               // arr[0] = 1
               // arr[j] = 1
               arr[j] = temp;
               // arr[j] = 2
               // temp = 5;
               // arr[0] = 2 arr[1]= 5;
               for (int iter = 0; iter < length; iter++) {
                   printf("%d ", arr[iter]);
               }
               printf("\n");
           }
        }
    }

    printf("\n");

    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}


