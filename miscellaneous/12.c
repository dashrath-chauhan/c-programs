#include<stdio.h>

int main(void)	{

    short int i = 0;

	printf("%ld", sizeof(i));
    for(i<=5 && i>=-1; ++i; i>0)	{
        
		printf("%u,", i);
	}
    return 0;
}

