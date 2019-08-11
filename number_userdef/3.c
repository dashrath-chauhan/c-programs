		/*
			Author: Dashrath Chauhan
			Function: Prime number
										*/

#include<stdio.h>

int main(void){
	int num, i;
	int flag = 0;

	printf("Enter a positive integer: ");
	scanf("%d", &num);

	for(i=2; i<(num/2); i++){
		if(num%i==0){
			flag = 1;
			break;
		}
	}

	if(flag==0)
		printf("Prime number\n");
	else
		printf("Not a prime number\n");
}
