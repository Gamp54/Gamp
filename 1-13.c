#include <stdio.h>
#define IN 1 /* in a word */
#define OUT 0 /* out a word */
/* print words in new lines */
int main()
{
	int c, state;
	state = OUT;
	while ((c=getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')
		{
			if (state == IN)
			putchar('\n');
			state = OUT;
		}	
		else
			if (c != ' ' || c != '\n' || c != '\t')
			{	
				putchar('*');
				state = IN;
			}
	}
}
