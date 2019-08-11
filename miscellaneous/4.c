//function redecleration error demonstration

#include<stdio.h>

int main(void) {
	extern int fun(float);

	int a;
	a = fun(3.14);
	printf("%d", a);
	return 0;
}

int fun(int aa){
	return (int)++aa;
}


/*
output: 
error: conflicting types for ‘fun’
	int fun(int aa)
     	^~~
4.c:5:13: note: previous declaration of ‘fun’ was here
	extern int fun(float);
      	       ^~~

*/
