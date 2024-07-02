#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool array_equal(int *a1, int l1, int *a2, int l2);


int main()
{
	int *a1 = malloc(sizeof(int)*5);
	int *a2 = malloc(sizeof(int)*5);
	 //a1 = {1,2,3,4,5};
	// a2 = {1,2,3,4,5};

	printf("Enter a1: \n");
	for(size_t i = 0; i < 5; i++)
	{
		scanf("%d",a1);
	}

	printf("Enter a2: \n");
	for(size_t i = 0; i < 5; i++)
	{
		scanf("%d",a2);
	}


	if(array_equal(a1, 5, a2, 5))
	{
		printf("Array is Equal\n");
	}
	else
	{
		printf("Array is Not Equal\n");
	}

	

	return 0;
}

bool array_equal(int *a1, int l1, int *a2, int l2)
{
	if(a1 == NULL || a2 == NULL) return false;

	if(l1 <= 0 || l2 <= 0) return false;

	if(l1 != l2) return false;

	for(size_t i = 0; i < l1; i++)
	{
		if(a1[i] != a2[i]) return false;
	}
	
	return true;
		
}
