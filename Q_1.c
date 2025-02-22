//1.Write a function that prints whether the number passed as parameter is divisible by 5. Accept the number from the user in main.

#include<stdio.h>
#include "function.h"

int main() {

	int num;
	printf("\nEnter Num = ");
	scanf_s("%d", &num);

	checkDivisible(num);

	return 0;
}