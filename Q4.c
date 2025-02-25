//4.Calculate the power of a number.Both power and number should be accepted from the user and passed to the function.
// The result should be printed in main.

#include<stdio.h>
#include "function.h"

int main() {
	int num;
	int p;
	printf("\nEnter Num And Power = ");
	scanf_s("%d%d", &num, &p);

	printf("\n%d^%d = %d\n",num,p, pow(num, p));

	return 0;
}