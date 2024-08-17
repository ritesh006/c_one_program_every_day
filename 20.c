#include <stdio.h>


int main()
{
	int c, bl=0;

	
	while((c = getchar()) != EOF)
	{
		if(c == ' ')
		{
			if( !bl)
			{
				putchar(c);
				bl=1;
			}
		}
		else
		{
			putchar(c);
			bl = 0;	
		}

	
	}

//	printf("Blank spaces: %d\n",bl);

	return 0;
}
