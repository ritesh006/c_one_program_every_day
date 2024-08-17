#include <stdio.h>

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\');  // Print the backslash character
            putchar('t');   // Print the 't' character
        } else if (c == '\b') {
            putchar('\\');  // Print the backslash character
            putchar('b');   // Print the 'b' character
        } else if (c == '\\') {
            putchar('\\');  // Print the first backslash character
            putchar('\\');  // Print the second backslash character
        } else {
            putchar(c);     // Print any other character as is
        }
    }

    return 0;
}

