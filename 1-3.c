#include <stdio.h>
/* print the table of Fahrenheit and Celsius temperature for fahr = 0, 20, ..., 300;float version */
int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; /* lowest temperature */
	upper = 300; /* highest temperature */
	step = 20;

	fahr = lower;
	printf("Celsius\tFahrenheit\n");
	while  (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf ("%3.0f %9.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
