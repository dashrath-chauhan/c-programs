//Area of rectangle program in c

#include<stdio.h>

int main(void) {

	float length, breadth, area;

	printf("Enter length and breadth of rectangle: (seperated by space)");	
	scanf("%f %f", &length, &breadth);
	area = length * breadth;

	printf("Area of rectngle with \"length: %f\" and \"breadth: %f\" is %f\n", length, breadth, area);
}
