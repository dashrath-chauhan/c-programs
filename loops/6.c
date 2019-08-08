		// Even odd in N series
		
#include<stdio.h>

int main(void) {
	int n, i;

	printf("Enter limit: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++) {
		if(i%2==0)
			printf("%4d [EVEN]\t\t", i);
		else
			printf("%4d [ODD]\t\t", i);
	}
}
