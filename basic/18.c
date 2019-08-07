/*C - Print ASCII value of entered character.*/

#include <stdio.h>

int main(void) {
	char ch;
	int asciiValue;

	printf("Enter any character: ");
	scanf("%c", &ch);

	asciiValue = (int)ch;

	printf("ASCII value of character: %c is: %d\n", ch, asciiValue);

}
