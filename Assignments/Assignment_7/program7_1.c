//Accept a number from the user and display $ and * alternatively for the given number of times. If the number is negative, consider its positive value.


#include<stdio.h>
#include<stdlib.h>


void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {

        iNo = -iNo;

    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
    }
    }

int main()
{

    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}