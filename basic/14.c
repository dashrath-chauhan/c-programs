/*C - Read Formatted Time Once through Scanf in C Language.*/

#include <stdio.h>

int main(void) {
	int a,b,c;
	
	printf("Enter time (in HH:MM:SS) ");
	scanf("%02d:%02d:%02d",&a,&b,&c);
	
	printf("Entered time is  %02d:%02d:%02d\n",a, b, c);
//	scanf("%03d:%03d:%03d",&hour,&minute,&second);
	
//	printf("Entered time is  %03d:%03d:%03d\n",hour, minute, second);
	
	return 0;	
}
