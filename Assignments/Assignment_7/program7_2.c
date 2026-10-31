//Write a C program to accept a number from the user and display all numbers from 1 to that number using a for loop.


#include<stdio.h>

void Display(int iNo)

{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }

}

int main()

{

    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}