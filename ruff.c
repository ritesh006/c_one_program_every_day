#include <stdio.h>

// Define color codes
#define RESET       "\033[0m"
#define BLACK       "\033[30m"
#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define YELLOW      "\033[33m"
#define BLUE        "\033[34m"
#define MAGENTA     "\033[35m"
#define CYAN        "\033[36m"
#define WHITE       "\033[37m"

// Define background color codes
#define BBLACK      "\033[40m"
#define BRED        "\033[41m"
#define BGREEN      "\033[42m"
#define BYELLOW     "\033[43m"
#define BBLUE       "\033[44m"
#define BMAGENTA    "\033[45m"
#define BCYAN       "\033[46m"
#define BWHITE      "\033[47m"

int main() {
    // Print text with different colors
    printf(RED "This is red text." RESET "\n");
    printf(GREEN "This is green text." RESET "\n");
    printf(BLUE "This is blue text." RESET "\n");
    printf(YELLOW "This is yellow text." RESET "\n");
    printf(BRED BCYAN "This is text with black background and white foreground." RESET "\n");

    return 0;
}
