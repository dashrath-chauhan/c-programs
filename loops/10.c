// print all alphabets

#include<stdio.h>

int main(void) {
	char i;
	int j;
	for(i='A'; i<='Z'; i++)
		printf("%c\t", i);
	printf("\n");
	for(i='a'; i<='z'; i++)
		printf("%c\t", i);
	printf("\n");

}
