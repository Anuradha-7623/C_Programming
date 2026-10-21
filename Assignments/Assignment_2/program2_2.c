//  Accept one number from the user and print that number of * on the screen.

#include <stdio.h>

// Function to print * the specified number of times
void Display(int iNo)
{
    // Repeat until iNo becomes 0
    while (iNo > 0)
    {
        printf(" * ");  // Display *

        iNo--;           // Updater: Decrement iNo by 1
    }
}

int main()
{
    int iValue = 0;

    // Accept a number from the user
    printf("Enter Number: ");
    scanf("%d", &iValue);

    // Call the Display function
    Display(iValue);

    return 0;
}
