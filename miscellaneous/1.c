#include<stdio.h>

int main(void){
	extern int i;
	i = 20;
	printf("%d", sizeof(i));
	return 0;		
}



//output: undefined reference to `i' -> linker error
// the keywork extern tells to the linker that the definition of i is in some other file, but linker didnt find any memory allocated to variable i in any other file.
