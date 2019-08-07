//C program to check EVEN or ODD

#include<stdio.h>

int main(void) {

	int x, y;
	
	printf("Enter x: ");
	scanf("%d", &x);

	if(x % 2 == 0)
		printf("%d is Even Number\n", x);
	else
		printf("%d is Odd Number\n", x);
}
