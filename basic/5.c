//Program for Largest Number among three numbers

#include<stdio.h>
int main(void) {
	int x, y, z;
	int largest;
	printf("Enter three numbers (separated by space): ");
	scanf("%d %d %d", &x, &y, &z);

	if(x>y && x>z)
		printf("%d is largest\n", x);
	else if(y>x && y>z)
		printf("%d is largest\n", y);
	else
		printf("%d is largest\n", z);

	largest = ((x>y && x>z)?x:(y>z && y>x)?y:z);
	printf("%d is largest\n", largest);
}
