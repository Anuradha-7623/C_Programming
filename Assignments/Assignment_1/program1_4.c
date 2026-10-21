//  Accept one number and check whether it is divisible by 5 or not.

#include <stdio.h>

// Define BOOL as an integer type
typedef int BOOL;

// Define TRUE and FALSE values
#define TRUE 1
#define FALSE 0

// Function to check whether the number is divisible by 5
BOOL Check(int iNo)
{
    // Check if the number is divisible by 5
    if ((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    // Accept a number from the user
    printf("Enter Number : ");
    scanf("%d", &iValue);

    // Call the Check function
    bRet = Check(iValue);

    // Display the result
    if (bRet == TRUE)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }

    return 0;
}


