#include<stdio.h>

int check_prime(int n);

int main(void) {
	int num, i;
	printf("Enter number: ");
	scanf("%d", &num);

	printf("Prime numbers from 1 to %d are: ", num);
	for(i=1; i<=num; i++) {
		if(check_prime(i))
			printf("%d ", i);
	}
	printf("\n");
	return 0;
}

int check_prime(int n) {
	int i;
	int flag=0;

	for(i=2; i<n; i++) {
		if(n % i == 0) {
			flag = 1;
			break;
		}
	}
	
	if(flag)
		return 0;
	else
		return 1;
}
