#include<stdio.h>

int main(void) {
	int num, temp, rem, rev = 0;

	printf("Enter number: ");
	scanf("%d", &num);

	temp = num;

	while(num > 0) {
		rem = num % 10;
		rev = rev * 10 + rem;
		num = num / 10; 
	}

	printf("Number is: %d\n", temp);
	printf("Reverse is: %d\n", rev);
	
	if(rev == temp)
		printf("It is a palindrome number: \n");
	else
		printf("It is not a palindrome number: \n");
}
