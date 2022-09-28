#pragma once

/*	application.h	*/

#ifndef APPLICATION_FILE
#define APPLICATION_FILE


#define _CRT_SECURE_NO_WARNINGS

#include "../Card/card.h"
#include "../Terminal/terminal.h"
#include "../Server/server.h"

char				holderName[50];
int 				expiryDate[3];
long long int		cardPAN;

int					transactionDate[3];
int					transactionAmount;
int					maxAmount;

#endif // End Of CARD_FILE
