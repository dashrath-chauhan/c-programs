/*C program to convert the given binary number into octal */

#include<stdio.h>

int main(void) {
	long int num, bin_val, base = 1, rem, oct_val = 0;

	printf("Enter number in binary:(0 and 1) -> ");	
	scanf("%ld", &num);

	bin_val = num;

	while(num != 0) {
		rem = num % 10;
		oct_val = oct_val + rem * base;
		base = base * 2;
		num = num / 10;
	}
	
	printf("Binary is: %ld\n", bin_val);
	printf("Octal is: %ld\n", oct_val);
}
