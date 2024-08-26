#include <stdio.h>


int main()
{
	int a = 50, b = 20, c = 30;

	printf(" a = %d b = %d c = %d \n", a, b, c);

	if( a > b)
	{
		if(a > c)
		{
			printf("A is greter = %d \n",a);
		}
	}
	else if( b > c)
	{
		printf(" B is greater = %d \n",b );
	}
	else 
	{
		printf("C is greater = %d \n",c);
	}




return 0;
}
