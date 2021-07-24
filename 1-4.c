#include <stdio.h>
/* print the table of Celsius and Fahrenheit temperature for fahr = 0, 20, ..., 300; float version; C to F */
int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = -50; /* lowest temperature */
	upper = 50; /* highest temperature */
	step = 10;

	celsius = lower;
	printf("Celsius\tFahrenheit\n");
	while  (celsius <= upper) {
		fahr = celsius * 9 / 5 + 32;;
		printf ("%3.0f %9.1f\n",celsius, fahr);
		celsius = celsius + step;
	}
}
