/*Printing value in Decimal, Octal, Hexadecimal using printf in C.*/
 
#include <stdio.h>
 
int main(void) {
    int value=2567;
     
    printf("Decimal value is: %d\n",value);
    printf("Octal value is: %o\n",value);
    printf("Hexadecimal value is (Alphabet in small letters): %x\n",value);
    printf("Hexadecimal value is (Alphabet in capital letters): %X\n",value);
     
    return 0;   
}
