//  Accept one number from the user If the number is less than 10, print "Hello".Otherwise, print "Demo".

#include <stdio.h>

// Function to check the number and display the message
void Display(int iNo)
{
    // Check whether the number is less than 10
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;

    // Accept a number from the user
    printf("Enter number: ");
    scanf("%d", &iValue);

    // Call the Display function
    Display(iValue);

    return 0;
}


