#include <stdio.h>
/* delete double space */
int main()
{
	int c, ns;
	ns = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ') 
		{
			++ns;
			if (ns != 2)
				putchar(32);
		}
		else 	
		{
			putchar(c);
			ns = 0;
		}
	}	
}
