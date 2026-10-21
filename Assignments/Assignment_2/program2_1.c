//Accept one number from the user and print that number of * on the screen.

#include <stdio.h>

void Display(int iNo)
{
int iCnt = 0;

// Iterate until iCnt becomes equal to iNo

while (iCnt < iNo)
{
    printf("*");   // Display * 

    iCnt++;        // Updater: Increment iCnt by 1
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

