/*
			Author: Dashrath Chauhan
			Function: Count occurence of digit in Number		*/

#include<stdio.h>

int main(void){
	int num, count = 0, find, rem=0, temp;

	printf("Enter a positive integer: ");
	scanf("%d", &num);

	printf("Enter number to find: ");
	scanf("%d", &find);

	temp = num;
	while(temp>0){
		rem = temp % 10;
		if(rem==find)
			count++;
		temp /= 10;
	}

	printf("%d occurs %d time in %d\n", find, count, num);
}
