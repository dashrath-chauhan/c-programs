			//octal to binary
			//Author: Dashrath Chauhan

#include<stdio.h>

int main(void){
	int num, count, i;
	int oct[32];

	printf("Enter number in octal: ");
	scanf("%d", &num);

	count = 0;
	while(num>0){
		oct[count] = num % 8;
		num = num / 8;
		count++;
	}

	printf("Equivalent binary number is: ");
	for(i=(count-1); i>=0; i--){
		printf("%d ", oct[i]);
	}
	printf("\n");
}
