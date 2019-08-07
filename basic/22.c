/*C program to convert the given binary number into decimal */

#include<stdio.h>

int main(void) {
	int num, bin_val, base = 1, rem, dec_val = 0;

	printf("Enter number in binary:(0 and 1) -> ");	
	scanf("%d", &num);

	bin_val = num;

	while(num > 0) {
		rem = num % 10;
		dec_val = dec_val + rem * base;
		num = num / 10;
		base = base * 2;
	}
	
	printf("The binary number is: %d\n", bin_val);
	printf("Equivalent decimal is: %d\n", dec_val);
}
