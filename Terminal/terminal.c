/*
 * Project Name: Payment System
 * File: terminal.c
 * Author: Belal Abdalaziz
 * Created August 2022
 */

#define _CRT_SECURE_NO_WARNINGS

#include "../Card/card.h"
#include "terminal.h"


void getTransactionDate(int* transDate)
{
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    printf("\nCurrent day's date : %d-%02d-%02d \n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
    transDate[0] = (int)tm.tm_mday;
    transDate[1] = (int)tm.tm_mon + 1;
    transDate[2] = (int)tm.tm_year + 1900;
}
int compareDates(int* date1, int* date2)
{
    if (date1[2] < date2[2])            // Compare Years
        return -1;

    else if (date1[2] > date2[2])       // Compare Years
        return 1;

    if (date1[2] == date2[2])           // Compare Years
    {
        if (date1[1] < date2[1])        // Compare Months
            return -1;
        else if (date1[1] > date2[1])   // Compare Months
            return 1;
        else if (date1[0] < date2[0])   // Compare Days
            return -1;
        else if (date1[0] > date2[0])   // Compare Days
            return 1;
        else
            return 0;
    }
}
int isCardExpired(int* transDate, int* expDate)
{
    int i = compareDates(transDate, expDate);
    switch (i)
    {
    case -1:
        printf("Card Not Expired \n");          // 1st argu earlier than 2nd argu
        return 1;
    case 1:
        printf("card is expired \n");          // 1st argu later than 2nd argu
        return -1;
    case 0:
        printf("card is expired \n");          // 1st argu same 2nd argu
        return -1;
    }
}

void getTransactionAmount(int* transAmo)
{
    printf("Please Enter Your Traansaction Amount less than 8000 lE : \n");
    scanf("%d", transAmo);
}
int isBelowMaxAmount(int* transAmo)
{
    // The largest amount that can be taken is 8000 LE
    if (*transAmo <= 8000)
    {
        printf("Lower than Max Amount of terminal. operation succesed \n");
        return 1;

    }
    else
    {
        printf("Greater than max amount of terminal 8000 LE . Operation failed!! \n");
        return -1;
    }
}
void setMaxAmount(int* transAmo)
{
    static int     maxAmount = 24000;  //max money can taken in one day from terminal
    //8000 LE For one operation and in one day 24000LE
    maxAmount = maxAmount - *transAmo;
    printf("Current max amount for terminal to use in other usage : %d  \n", maxAmount);
}


void teminalProcess(int* transDate, int* expDate, int* transAmo)
////void main()
{
    printf("############################################################## \n");
    printf("#		|	Terminal Side	|		     # \n");
    printf("############################################################## \n");
    getTransactionDate(transDate);
    if (isCardExpired(transDate, expDate) > 0)
    {
        getTransactionAmount(transAmo);
        if (isBelowMaxAmount(transAmo) == 1)
        {
            setMaxAmount(transAmo);
        }
    }
}
