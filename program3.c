///////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Descreption :   used to accept number from user and print even factors of that number
//  Author :        Diksha Anil Chavan
//  Date :          11/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i <= (iNo / 2) ; i++)
    {
        if(((iNo % i) == 0) && ((i % 2) == 0))
        {
            printf("%d ",i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return 0;
}