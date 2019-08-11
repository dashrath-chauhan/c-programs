		/*
			Author: Dashrath Chauhan
			Function: Sum and Product of all numbers
										*/

#include<stdio.h>

int main(void)
{
	int num, digit;
	int sum=0, pro=1;

	printf("Enter a positive integer: ");
	scanf("%d", &num);

	while(num>0)
	{
		digit = num % 10;
		sum += digit;
		pro *= digit;
		num = num / 10;
	}
	printf("Sum of all digit is %d\n", sum);
	printf("Product of all digit is %d\n", pro);
}
