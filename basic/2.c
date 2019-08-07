//Program to find quotient and remainder in C

#include<stdio.h>

int main() {
	int x, y;
	int q, r;

	printf("Enter x and y: ");
	scanf("%d %d", &x, &y);

	q = y / x;
	r = y % x;	
	
	printf("Quotient of %d divides %d is: %d", x, y, q);
	printf("\nRemainder of %d divides %d is: %d", x, y, r);	
}
