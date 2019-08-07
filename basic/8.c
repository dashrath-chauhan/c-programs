//sizeof() operator example program

#include <stdio.h>
 
int main(void) {     
    char    a       = 'A';           
    int     b       = 120;
    float   c       = 123.0f;
    double  d       = 1222.90;
    char    str[]   = "Hello";

	printf("Size of a is %d\n", sizeof(a));
	printf("Size of b is %d\n", sizeof(b));
	printf("Size of c is %d\n", sizeof(c));
	printf("Size of d is %d\n", sizeof(d));
	printf("Size of str is %d\n", sizeof(str));
}
