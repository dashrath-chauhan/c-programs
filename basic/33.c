#include<stdio.h>

int main(void) {
	int num;
	int l2d;

	printf("Enter number: ");
	scanf("%d", &num);

	l2d = num % 100;

	printf("Last two digits: %d\n", l2d);
}
