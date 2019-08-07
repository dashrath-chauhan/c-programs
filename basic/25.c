				// days to years weeks and days

#include<stdio.h>

#define DOW 7

int main(void) {
	int ndays, years, weeks, days;
	
	unsigned int x = -10;
	printf("%u\n", x);
	printf("Enter number of days: ");
	scanf("%d", &ndays);

	years = ndays / 365;
	weeks = (ndays % 365) / DOW;
	days = (ndays % 365) % DOW;

	printf("%d days is equal to %d years %d weeks and %d days\n", ndays, years, weeks, days);	
}
