#include <stdio.h>
#include <string.h>

int main() {
    char *str1 = "pm";
   
    // printf("Enter String: ");
    // scanf("%s",str1);
    // const char *str3 = "apple";
    
    // int result1 = strcmp(str1, str2);  // Returns a value greater than zero
    int result2 = strcmp(str1, "pm");  // Returns zero
    printf("Comparison result (str1 vs str3): %d\n", result2);

    result2 = strcmp(str1, "PM");
    printf("Comparison result (str1 vs str3): %d\n", result2);

      result2 = strcmp(str1, "P");
    printf("Comparison result (str1 vs str3): %d\n", result2);

     result2 = strcmp(str1, "p");
    printf("Comparison result (str1 vs str3): %d\n", result2);

    if(!strcmp(str1, "pm"))
    printf("Your String is: %s\n", str1);
    // printf("Comparison result (str1 vs str3): %d\n", result2);
    
    return 0;
}
