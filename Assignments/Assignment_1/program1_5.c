//Accept one number from user and print that number of * on screen.


#include <stdio.h>

// Function to print the specified number of * symbols
void Accept(int iNo)
{
    int iCnt = 0;

    // Loop to print * symbols
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;

    // Accept a number from the user
    printf("Enter your number: ");
    scanf("%d", &iValue);

    // Call the Accept function
    Accept(iValue);

    return 0;
}


