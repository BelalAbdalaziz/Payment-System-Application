/*
 * Project Name: Payment System
 * File: card.c
 * Author: Belal Abdalaziz
 * Created August 2022
 */
#define _CRT_SECURE_NO_WARNINGS
#include "card.h"

void getCardHolderName(char* name)
{
	printf("Please enter your holder name without spaces: \n");
	scanf("%s", name);
	//gets_s(name,5*sizeof(name));
}
void getCardPAN(long long int* pan)
{
	printf("Please enter your primary account number: \n");
	scanf("%lld", pan);
}
void getCardExpiryDate(int* date)
{
	//int	d,m,year,date[3];
	printf("Enter expire date (dd/mm/yy): \n");
	scanf("%d/%d/%d", &date[0], &date[1], &date[2]);
}

void cardProcess(char* name, int* date, long long int* pan)
//void main(void)
{
	printf("############################################################## \n");
	printf("#		|	Card Side	|		     # \n");
	printf("############################################################## \n");

	getCardHolderName(name);
	getCardPAN(pan);
	getCardExpiryDate(date);
	//printf("#####################################################################################\n");
	printf("\nHolder Name : %s ,, Expiry Date : %d/%d/%d ,, cardpan : %lld\n\n", name, date[0], date[1], date[2], *pan);
	//printf("#####################################################################################\n");
}