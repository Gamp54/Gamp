#include <stdio.h>
/* delete double space */
int main()
{
	int c, b;
	b=0;
	while ((c = getchar()) != EOF)
	{
		if (c != ' ')
			putchar(c);
		else
			if (b != ' ')
			putchar(c);
		b = c;
	}	
}
