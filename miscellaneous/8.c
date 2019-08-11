#include<stdio.h>

struct emp{
    char name[20];
    int age;
};

int main(){
    //struct emp xx;
	emp int xx;
    int a;
    printf("%d\n", &a);
    return 0;
}

/*
output: 
	will generate error in "emp int xx" as it is not a valid declaration.
	Replacing "emp int xx" with "struct emp xx" will solve the error and print address/memoy location of variable a.
*/
