// leap years between 1 to N
 
#include <stdio.h>
 
int main() {
    int i,n;
 
    printf("Enter the value of N: ");
    scanf("%d",&n);
 
    printf("Leap years between 1 to %d \n", n);
    for(i=1;i<=n;i++) {
        if((i % 400 == 0)||(i % 4 == 0 && i % 100 != 0)){
			printf("%4d\t", i);
		}
    }
     
    return 0;
}
