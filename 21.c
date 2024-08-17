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
		else
		{
			putchar(c);
	
		}
	}



return 0;
}
