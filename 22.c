#include <stdio.h>



int main()
{

	int c,tab;


	while((c = getchar()) != EOF)
	{
			
		if(c == '\t')
		{
			putchar('\\');
			putchar('t');
		}
		if(c == '\b')
		{
			putchar('\\');
			putchar('b');

		}
		if(c == '\\')
		{
			putchar('\\');
			putchar('\\');

		}
		else
		{
			putchar(c);
	
		}
	}



return 0;
}
