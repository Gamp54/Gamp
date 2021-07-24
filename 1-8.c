#include <stdio.h>
/* count spaces, \t, \n */
int main()
{
	int c, ns, nt, nn;
	ns = 0, nt = 0, nn = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == 32) 
			++ns;	
		if (c == '\t') 
                        ++nt;	
		if (c == '\n')
			++nn;
	}	 
	printf("%d\n %d\n %d\n", ns, nt, nn);
}
