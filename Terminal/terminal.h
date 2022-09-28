
/*	terminal.h	*/
#ifndef TERMINAL_FILE
#define TERMINAL_FILE

#include <stdio.h>
#include<time.h>


void getTransactionDate(int* transDate);
int compareDates(int* date1, int* date2);
int isCardExpired(int* transDate, int* expDate);
void getTransactionAmount(int* transAmo);
int isBelowMaxAmount(int* transAmo);
void setMaxAmount(int* transAmo);
void teminalProcess(void);


#endif // End Of TERMINAL_FILE
