#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{

         int n;

	 for (n = 0; n < 10; n++)
	     {
		putchar(n);
		if (n != 9)
	     {  
		putchar(',');
																	putchar(' ');
																     }
	     }
	     putchar('\n');
	     return (0);
}
