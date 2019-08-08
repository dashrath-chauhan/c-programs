	//print multiplication table

#include<stdio.h>

int main(void) {
	int i, n, j;

	for(i=1; i<=20; i++) {
		printf("\nTable of %d\n", i);
		for(j=1; j<=10; j++) {
			printf("%3d * %2d = %3d\n", i, j, i*j);	
		}
	}
}
