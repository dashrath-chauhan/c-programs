// arithmetic operations with command line arguments

#include<stdio.h>

int main(int argc, char *argv[]) {
	char ch;
	int a, b;
	unsigned result;

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	ch = *argv[3];

	printf("%d %d %c", a, b, ch);

	switch(ch) {
		case '+':
			result = a + b;
			break;

		case '-':
			result = a - b;
			break;

		case '/':
			result = a / b;
			break;

		case 'X':
			result = a * b;
			break;
	
		default:
			printf("Enter valid operation: \n");
	}
	
	printf("\nResult is %u\n", result);
}
