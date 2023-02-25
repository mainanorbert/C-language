#include <stdio.h>

int main() {
    int num, num2, num3;

    printf("Enter a number: ");  // Prompt the user for input
    scanf("%d", &num);  // Read in the user's input and store it in the variable "num"
    printf("Enter a second number");
    scanf("%d", &num2);  // Read in the user's input and store it in the variable "num"
    

    printf("You entered: %d%4d", num, num2);  // Display the user's input

    return 0;
}