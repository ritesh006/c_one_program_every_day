#include<stdio.h>

int main()
{
	int c,d;
	
	while(d =((c = getchar()) != EOF))
	{
		putchar(c);
		printf("EOF VALUE: %d\n",d);
		printf("EOF VALUE: %d\n",EOF);
	}

	
	return 0;

}
