



#include "application.h"

void applicationProcess(void)
{
	int x = 1;
	while (x != 0)
	{
		cardProcess(&holderName, &expiryDate, &cardPAN);
		teminalProcess(transactionDate, expiryDate, &transactionAmount);
		serverProcess(&cardPAN, &transactionAmount);
		printf("if you want to close preess '0' \nOr To do a new operation Press '1' \n ");
		scanf("%d", &x);
	}
	printf("Thanks For Using This Application (: <3 \n");
}
