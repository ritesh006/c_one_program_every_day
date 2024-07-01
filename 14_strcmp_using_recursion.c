#include<stdio.h>
#include <stdbool.h>



bool compare_string(char *, char*);

int main()
{

    char str1 [] = "ABCD";
    char str2 [] = "ABCD";


    if(compare_string(str1, str2))
    {
        printf("string is equal\n");
    }
    else{
        printf("string is not equal\n");
    }




    return 0;
}

bool compare_string(char *str1, char *str2)
{
    if(*str1 != *str2)
    {
        return false;
    }
    else if(*str1 == '\0' && *str2 =='\n')
    {
        return true;
    }
    else
    {
        str1++;
        str2++;
        compare_string(str1, str2);
    }
}