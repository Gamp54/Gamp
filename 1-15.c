#include <stdio.h>
/* print the table of Fahrenheit and Celsius temperature for fahr = 0, 20, ..., 300;function version */
float cels(float f);
int main()
{
	float fahr;
	int lower, upper, step;

	lower = 0; /* lowest temperature */
	upper = 300; /* highest temperature */
	step = 20;

	fahr = lower;
	printf("Fahrenheit Celsius\n");
	while  (fahr <= upper) {
		printf ("%3.0f %12.1f\n", fahr, cels(fahr));
		fahr = fahr + step;
	}
	return 0;
}
/* celsius calculation*/
float cels(float fahr)
{
	float celsius;
	celsius = (5.0/9.0) * (fahr-32.0);
	return celsius;
}
