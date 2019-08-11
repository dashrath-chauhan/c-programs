			//Decimal to binary
			//Author: Dashrath Chauhan

#include<stdio.h>

int main(void){
	int num, count, i;
	int bin[32];

	printf("Enter number in decimal: ");
	scanf("%d", &num);

	count = 0;
	while(num>0){
		bin[count] = num % 2;
		num = num / 2;
		count++;
	}

	printf("Equivalent binary number is: ");
	for(i=(count-1); i>=0; i--){
		printf("%d ", bin[i]);
	}
	printf("\n");
}
