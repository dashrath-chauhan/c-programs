		/*
			Author: Dashrath Chauhan
			Function: Armstrong Number		*/

#include<stdio.h>

int main(void){
	int num, sum=0, digit = 0, tempNum;

	printf("Enter a positive integer: ");
	scanf("%d", &num);
	
	tempNum = num;

	while(tempNum!=0){
		digit = tempNum % 10;
		sum = sum + (digit*digit*digit);
		tempNum /= 10;
	}

	if(sum == num)  
        printf("%d is Armstrong\n", num);
    else
        printf("%d is not Armstrong\n", num);
 
}
