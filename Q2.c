//2.Write a function to check whether the 3 - digit number is an Armstrong number.If it is, print the message 
// – “it is an Armstrong number” else print that “it is not Armstrong”.Accept the number from the user in main.

#include<stdio.h>
#include "function.h"

int main() {

	int num;
	printf("\nEnter Num To check Armstrong = ");
	scanf_s("%d", &num);

	checkArm(num);

	return 0;
}