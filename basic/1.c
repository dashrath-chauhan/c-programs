//Sum and Average of two numbers

#include<stdio.h>

int	main() {
	int x, y, sum;
	float average;

	printf("Enter the Values of x and y: ");
	scanf("%d %d", &x, &y);
	
	sum = x+y;
	average = (float)sum/2;
	
	printf("Sum of %d and %d is %d ", x, y, sum);
	printf("\nAverage of %d and %d is %f ", x, y, average);
}
