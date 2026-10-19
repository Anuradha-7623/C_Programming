#include <stdio.h>

// Function to divide two numbers
int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    // Check whether the second number is zero
    if (iNo2 == 0)
    {
        return -1;
    }

    // Perform division
    iAns = iNo1 / iNo2;

    return iAns;
}

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    // Call the Divide function
    iRet = Divide(iValue1, iValue2);

    // Display the result
    printf("Division is %d\n", iRet);

    return 0;
}
