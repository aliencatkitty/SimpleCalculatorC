#include <stdio.h>

int main(void)
{
	double first;
	double second;
	float firstFloat;
	float secondFloat;
	int precedenceResult = 2 + 3 * 4;
	int groupedResult = (2 + 3) * 4;

	printf("Enter two numbers: ");
	if (scanf("%lf %lf", &first, &second) != 2) {
		fprintf(stderr, "Invalid input. Please enter two numbers.\n");
		return 1;
	}

	firstFloat = (float)first;
	secondFloat = (float)second;

	printf("\nResults (double):\n");
	printf("%.10g + %.10g = %.10g\n", first, second, first + second);
	printf("%.10g - %.10g = %.10g\n", first, second, first - second);
	printf("%.10g * %.10g = %.10g\n", first, second, first * second);
	if (second == 0.0) {
		printf("Division is undefined when the second number is zero.\n");
	} else {
		printf("%.10g / %.10g = %.10g\n", first, second, first / second);
	}

	printf("\nType examples:\n");
	printf("float addition: %.7g + %.7g = %.7g\n",
		   (double)firstFloat, (double)secondFloat, firstFloat + secondFloat);
	printf("int precedence: 2 + 3 * 4 = %d\n", precedenceResult);
	printf("int with parentheses: (2 + 3) * 4 = %d\n", groupedResult);

	return 0;
}
