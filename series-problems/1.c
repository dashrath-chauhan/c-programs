//1 + 2 + 3 + 4 + 5 + ... + n

#include<stdio.h>

int main(void) {
	int i, j, n, sum=0;

	printf("Enter n: ");
	scanf("%d", &n);

	for(i=1; i<=n; i++){
		sum = sum + i;
		//printf("%d + ", i);
	}
	printf("\nSum: %d ", sum);
	printf("\n");
}
