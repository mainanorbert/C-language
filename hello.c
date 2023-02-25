#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");  // Prompt the user for input
    scanf("%d", &num);  // Read in the user's input and store it in the variable "num"

    printf("You entered: %d", num);  // Display the user's input

    return 0;
}