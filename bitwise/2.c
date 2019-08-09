//no of bits required to store an integer

#include<stdio.h>

int count_bit(int n);

int main(void) {
	int n;
	
	printf("Enter number: ");
	scanf("%i", &n);
	
	printf("Total number of bits required to store %i is %i \n", n, count_bit(n));
}

int count_bit(int n){
	int i, count=0, d;

	if(n==0)
		return 0;
	printf("count   i      bit\n");
	for(i=0; i<32; i++){
		if((1 << i) & n){
			count=i;
			d = (1 << i) & n;
			printf("%i \t%i \t%i \n", count, i, d);			
		}
	}
	printf("%i = ", n);
	for(i=count; i>=0; i--){
		if((1 << i) & n)
			printf("1 ");
		else
			printf("0 ");
	}
	printf("\n");
	return ++count;
}
