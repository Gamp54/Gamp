#include <stdio.h>

#define MAXLINE 1000 /* maximum string length */

int getlin(char linef[], int);
void copy(char to[], char fromf[]);

/* print longest string */
int  main()
{
	int len; /* current length */;
	int max; /* temporary max length */;
	char line[MAXLINE]; /*curent string */
	char longest[MAXLINE]; /* the longest string */
	max = 0;
	while ((len=getlin(line, MAXLINE)) > 0)
		if (len > max) 
		{ 
			max = len;
			copy(longest, line);
		}
	if (max > 0)
		printf("%s%d", longest, max);
	return(0);
}

/* getlin: reads a string in s, return length */
int getlin(char s[], int lim)
{
	int c,i;
	for (i = 0; i < lim -1 && (c = getchar()) != EOF && c != '\n'; i++)
		s[i] = c;
	if (c == 'n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;	
}

/* copy: copying "from" "to"; "to" is big enough */
void copy(char to[], char from[])
{
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}

