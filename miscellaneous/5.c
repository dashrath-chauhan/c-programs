//program for checking local scope and global scope of variable

#include<stdio.h>

int main(void){
    int X=40;{
        int X=20;
        printf("%d ", X);
    }
    printf("%d\n", X);
    return 0;
}

