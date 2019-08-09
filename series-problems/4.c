// (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)

#include<stdio.h>

int main(void){
	int i, j, n, sum=0;

	printf("Enter n: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
			sum += j;
			//printf("(%d + %d)", i, j); 
		}
		//printf("(%d + %d) +", i, j);
	}
	printf("\nSum: %d\n", sum);
}
