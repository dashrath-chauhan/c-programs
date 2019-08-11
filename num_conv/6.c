			//decimal to hexadeciaml converison
			//Author: Dashrath Chauhan

#include<stdio.h>

int main(void){
	int num, count, i;
	char hex[32];

	printf("Enter number in decimal: ");
	scanf("%d", &num);

	count = 0;
	while(num>0){
		switch(num % 16){
			case 10:
				hex[count]='A'; break;
			case 11:
				hex[count]='B'; break;
			case 12:
				hex[count]='C'; break;
			case 13:
				hex[count]='D'; break;
			case 14:
				hex[count]='E'; break;
			case 15:
				hex[count]='F'; break;
			default:
				hex[count] = (num%16) + 0x30;
		}
		num = num / 16;
		count++;
	}

	printf("Equivalent Hex number is: ");
	for(i=(count-1); i>=0; i--){
		printf("%c", hex[i]);
	}
	printf("\n");
}
