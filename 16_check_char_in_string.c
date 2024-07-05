#include <stdio.h>
#include <stdbool.h>



bool char_search(char *string, char to_find, size_t length)
{
	for(size_t i = 0; i < length; i++)
	{
		if(string[i] == to_find)
		{
			return true;
		}
	}
	return false;
}
int main()
{
	char string [] = "abcdefgh";
	char to_find;
	printf("Enter char to find: ");
	scanf("%c",&to_find);
	size_t length = sizeof(string);
 
	bool result = char_search(string, to_find, length);
	if(result)
	{
		printf("char found %c\n",to_find);
	}
	else
	{
		printf("Not found\n");
	}


	return 0;
}
