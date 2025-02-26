//5.Check whether the accepted character is an alphabet. Display the message accordingly in main.
//[Hint:return 1 or 0]

#include<stdio.h>
#include "function.h"

int main() {

	char ch;
	printf("\nEnter Char = ");
	scanf_s("%c", &ch, 1);

	if (checkAlph(ch)) {
		printf("\nAlphabate\n");
	}
	else {
		printf("\nNot Alphabate\n");
	}

	return 0;
}