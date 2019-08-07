/*C program to convert the given decimal number into binary and count of 1's */

#include<stdio.h>

int main(void) {
	int num, bin_val = 0, base = 1, rem, dec_val, count_One = 0, count_Zero = 0;

	printf("Enter decimal number -> ");	
	scanf("%d", &num);

	dec_val = num;

	while(num > 0) {
		rem = num % 2;

		if(rem == 1)
			count_One++;
		else
			count_Zero++;

		bin_val = bin_val + rem * base;
		num = num / 2;
		base = base * 10;
	}
	
	printf("Decimal is: %d\n", dec_val);
	printf("Equivalent Binary is: %d\n", bin_val);
	printf("Total count of 1's is: %d\n", count_One);
	printf("Total count of 0's is: %d\n", count_Zero);
}
