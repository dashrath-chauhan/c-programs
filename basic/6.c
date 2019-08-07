//C program for power x^n
//to execute gcc file_name.c -lm -o power


#include<stdio.h>
#include<math.h>

int main(void) {

	int base, po;
	int result;
	
	printf("Enter base: ");
	scanf("%d", &base);
	printf("\nEnter power: ");
	scanf("%d", &po);

	result = pow(base, po);
	printf("\n%d power %d is %d\n", base, po, result);
}


