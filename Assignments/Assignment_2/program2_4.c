// Accept two numbers from the user and display the first number as many times as specified by the second number.

#include<stdio.h>

// Function to display the number according to frequency
void Display(int iNo, int Frequency)
{
    int iCnt = 0;

    // Loop to display the number repeatedly
    for(iCnt = 1; iCnt <= Frequency; iCnt++)
    {
        printf("%d\t", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    // Accept the number from the user
    printf("Enter Number : ");
    scanf("%d", &iValue);

    // Accept the frequency from the user
    printf("Enter Frequency : ");
    scanf("%d", &iCount);

    // Call the Display function
    Display(iValue, iCount);

    return 0;
}


