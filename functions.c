void checkDivisible(int num) {

	if (num % 5 == 0) {
		printf("\nGiven Num %d is Divisible By 5 \n",num);
	}
	else {
		printf("\nGiven Num %d is Not Divisible By 5\n",num);
	}
}

void checkArm(int num) {
	int n = num;
	int temp = num;
	int count = 0;
	int arm = 0;
	while (n > 0) {
		count++;
		n /= 10;
	}

	for (int i = 1; i <= count; i++) {
		int lastDigit = temp % 10;

		int mult = 1;

		for (int j = 1; j <= count; j++) {
			mult = lastDigit * mult;
		}
		arm = arm + mult;
		
		temp /= 10;
	}

	if (arm == num) {
		printf("\nArmstrong %d\n",num);
	}
	else {
		printf("\nNot Armstrong %d\n", num);
	}
}

float areaCircle(int r) {

	float a = 3.14 * (r * r);

		return a;
}

int pow(int num, int pow) {

	int mult = 1;
	for (int i = 1; i <= pow; i++) {
		mult = num * mult;
	}

	return mult;
}

int checkAlph(int ch) {

	if (ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122) {
		return 1;
	}
	else {
		return 0;
	}
}