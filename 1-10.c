#include <stdio.h>
/* change ESC-symb to text */
int main()
{
	int c;
	while ((c=getchar()) != EOF)
	{
		if (c == 9)
		{
			putchar('\\');
			putchar('t');
		}
		else
		if (c == 8)
		{
			putchar('\\');
			putchar('b');
		}
		else
		if (c == 92)
		{
			putchar('\\');
			putchar('\\');
		}
		else
			putchar(c);
	}
}
