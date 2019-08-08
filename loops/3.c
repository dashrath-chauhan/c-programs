	//factorial

#include<stdio.h>

int fact(int n);

int main(void) {
	int factorial, n;

	printf("Enter number to find factorial: ");
	scanf("%d", &n);
	factorial = fact(n);
	printf("%d factorial is %d\n", n, factorial);
}

int fact(int n) {
	if(n == 0 || n == 1)
		return 1;
	else
	{
		return n * fact(n-1);
	}
}
