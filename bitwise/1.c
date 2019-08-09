// decimal to binary conversion

#include<stdio.h>

void get_binary();

int main()
{
	int num=0;
	int i, x;
	printf("Enter number: ");
	scanf("%d", &num);
	
	printf("Binary of %d is = ", num);
	get_binary(num);
	printf("\n");
	for(i=15; i>=0; i--){	
		printf("%d", i);
		x = (1 << i) & num;
		printf("%d\n", x);
	}
}

void get_binary(int n){
	int x;
	int i;
	for(i=15; i>=0; i--){
		if((1 << i) & n)
			printf("1");
		else
			printf("0");
	}
}
