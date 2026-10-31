//**Write a C program to accept a number from the user and display all odd numbers from 1 up to that number using a for loop.**


#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt = iCnt+2)
    {
        printf("%d\t",iCnt);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);


    OddDisplay(iValue);

    return 0;

}