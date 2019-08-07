// Area and perimeter of a circle

#include<stdio.h>
#define PI 3.14

int main(void) {
	
	float rad, area, perm;

	printf("Enter radius of the circle: ");
	scanf("%f", &rad);

	area = PI * rad * rad;
	perm = 2 * PI * rad;

	printf("Area of circle with radius %f is %f\n", rad, area);
	printf("Perimeter of circle with radius %f is %f\n", rad, perm);
}
