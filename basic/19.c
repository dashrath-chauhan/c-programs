/*C - Print How Many Inputs are Taken from 
Keyboard using Scanf in C Progra.*/
 
#include <stdio.h>
 
int main(void) {

    int count=0;
    int num; 
    int arr[100], i=0;
     
    while(num != -1){
        printf("Enter an integer number (-1 to exit): ");
        count += scanf("%d",&num);
        arr[i++] = num;
		printf("Count = %d\n", count);
		printf("i = %d\n", i);
    }
     
    printf("\nTotal Inputs (including 0) are: %d\n",count);
    printf("Entered numbers are:\n");
    for(i=0; i<count-1; i++){
		//printf("Count = %d\n", count);
		//printf("i = %d\n", i);
        printf("%d ",arr[i]);
    }
     
    printf("\n");
    return 0;       
}
