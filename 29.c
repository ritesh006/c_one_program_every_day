#include <stdio.h>


int main ()
{
	int a = 100, b = 50, c = 60;


	int max = a;


	if( max < b)
	max = b;

	if(max < c)
	max = c;


	printf("%d %d %d max = %d\n",a,b,c,max);

	return 0;

}
