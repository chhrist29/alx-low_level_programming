#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int n;
	char ch;
	for(n = 0; n < 10; n++)
	{
		putchar(n);
	}
	
	for(ch ='a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0) ;
}
