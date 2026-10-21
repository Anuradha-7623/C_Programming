
// Accept a number from the user and check whether the number is even or odd.

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

// Function to check whether the number is even
BOOL CheckEven(int iNo)
{
    if ((iNo % 2) == 0)
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

    // Accept number from the user
    printf("Enter number: ");
    scanf("%d", &iValue);

    // Call the function
    bRet = CheckEven(iValue);

    // Display the result
    if (bRet == TRUE)
    {
        printf("%d is an even number\n", iValue);
    }
    else
    {
        printf("%d is an odd number\n", iValue);
    }

    return 0;
}

