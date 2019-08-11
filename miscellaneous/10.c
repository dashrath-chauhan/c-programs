//for loop without expression1 in standard syntax

#include<stdio.h>

int main(void)	{

	int i = 0;
	
	for( ; i<=5; i++);
		printf("A%d\n", i);
	
	for(; i<=5; i++)
		printf("B%d\n", i);

	return 0;
}
