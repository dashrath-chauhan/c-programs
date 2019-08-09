//(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include<stdio.h>

int main(void) {
	int i, j, n, sum=0;

	printf("Enter n: ");
	scanf("%d", &n);
		
	for(i=1; i<=n; i++){
		sum += i * i;
		printf(" (%d * %d)", i, i);
		printf(" + ");
	}
	printf("\nSum: %d\n", sum);
}
