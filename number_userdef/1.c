		/*
			Author: Dashrath Chauhan
			Function: Reversing number
										*/

#include<stdio.h>

int main(void){
	int num, revNum;
	int digit;

	printf("Enter a positive integer: ");
	scanf("%d", &num);
	
	revNum = 0;

	while(num>0){
		digit = num % 10;
		revNum = (revNum * 10) + digit;
		num = num / 10;
	}
	printf("Reverse number is %d\n", revNum);
}
