#include <stdio.h>

int main(){

	int num1, num2, result;
	printf("\nEnter the two number: ");
	scanf("%d %d", &num1, &num2);

    add(num1, num2,&result);

	printf("\nAddition of %d and %d is %d", num1, num2, result);

}


void add(int no1, int no2,int *res)
{
	
	*res = no1 + no2;

}