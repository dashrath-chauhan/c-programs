/*
			Author: Dashrath Chauhan
			Function: Count digits Number		*/

#include<stdio.h>

int main(void){
	int num, count=0, temp;

	printf("Enter a positive integer: ");
	scanf("%d", &num);

	temp = num;
	while(temp>0){
		count++;		
		temp /= 10;
	}

	printf("Total %d digits in %d\n", count, num);
}
