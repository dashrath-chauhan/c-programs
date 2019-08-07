//C program for Simple Interest	SI = PRN/100

#include<stdio.h>

int main(void) {
	float p, r, n, i;

	printf("Enter Principal: ");
	scanf("%f", &p);
	printf("Enter Rate: ");
	scanf("%f", &r);
	printf("Enter Time in years: ");
	scanf("%f", &n);

	i = (p*r*n)/100;
	printf("Simple Interest is: %f\n", i);
}

