//Difference of two integer numbers program0

#include<stdio.h>
#include<stdio.h>	
int main(void) {
	
	int x, y;
	int diff;

	printf("Enter two numbers: (seperated by space)");
	scanf("%d %d", &x, &y);

	if(x>y)
		diff = x-y;
	else
		diff = y-x;

	//diff = abs(x-y);   Short method		
	printf("Difference between %d and %d is %d\n", x, y, diff);	
}
