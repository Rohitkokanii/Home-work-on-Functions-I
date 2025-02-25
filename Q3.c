//3. Accept radius of a circle from the user in main. Calculate area of the circle and display the result in main.

#include<stdio.h>
#include "function.h"

int main() {

	int rds;
	printf("\nEnter The Radius Of Circle = ");
	scanf_s("%d", &rds);

	float result = areaCircle(rds);

	printf("\nArea of Circle = %g\n",result);
	return 0;
}