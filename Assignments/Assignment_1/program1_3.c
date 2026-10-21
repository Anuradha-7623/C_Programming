//program to print 5 to 1 numbers on screen


#include <stdio.h>

// Function to print numbers from 5 to 1
void Display()
{
    int iCnt = 0;
    iCnt = 5;

    // Repeat the loop while iCnt is greater than or equal to 1
    while (iCnt >= 1)
    {
        printf("%d\n", iCnt);  // Print the current number
        iCnt--;                // Decrement the counter by 1
    }
}

int main()
{
    // Call the Display function
    Display();

    return 0;
}
