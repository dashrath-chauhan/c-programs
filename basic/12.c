// multiplication usign + operator

#include<stdio.h>

int main(void) {

	int a, b, mul, i;

	printf("Enter to numbers: ");
	scanf("%d %d", &a, &b);

	mul = 0;
	for(i=0; i<a; i++)
	{
		mul = mul + b;
		printf("\n%d", mul);
	}
	printf("\nMultiplication of %d and %d is %d\n", a, b, mul);
}
