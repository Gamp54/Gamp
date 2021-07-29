#include <stdio.h>
#define IN 1 /* in a word */
#define OUT 0 /* out a word */
/* print words in new lines */
int main()
{
	int c, i, j;
	int freq[255]={0};
	while ((c=getchar()) != EOF)
	{
		freq[c]++;

	}
	for (i = 0; i < 256; i++)
		if (freq[i] !=0)
		{
			putchar('\n');
			putchar(i);
			putchar(' ');
			for (j = 0; j <= freq[i]-1; j++) 
			putchar('*');
		}
}
