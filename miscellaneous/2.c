#include<stdio.h>

int main(void){
    extern int a;
    printf("%d\n", a);
    return 0;
}

int a=20;


//output: 20 
//extern int a; indicates that the variable a is defined elsewhere, usually in a separate source code module.

//printf("%d\n", a); it prints the value of local variable int a = 20. Because, whenever there is a conflict between local variable and global variable, local variable gets the highest priority. So it prints 20.

