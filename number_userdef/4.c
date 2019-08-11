		/*
			Author: Dashrath Chauhan
			Function: Palindrome number
										*/

#include<stdio.h>

int main(void){
	int num, revNum=0, digit = 0, tempNum;

	printf("Enter a positive integer: ");
	scanf("%d", &num);
	
	tempNum = num;

	while(tempNum!=0){
		digit = tempNum % 10;
		revNum = (revNum * 10) + digit;
		tempNum /= 10;
	}

	if(revNum == num)  
        printf("%d is a palindrome\n", num);
    else
        printf("%d is not a palindrome\n", num);
 
}
