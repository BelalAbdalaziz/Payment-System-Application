
/*	card.h	*/
#ifndef CARD_FILE
#define CARD_FILE
#include <stdio.h>
char							holderName[50];
int 							expiryDate[3];
long long int					cardPAN;

void getCardHolderName(char* name);
void getCardExpiryDate(int* date);
void getCardPAN(long long int* pan);
void cardProcess(char* name, int* date, long long int* pan);


#endif // End Of CARD_FILE

