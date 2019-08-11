//pointers variables size program

#include<stdio.h>

int main(void){
    char *s1;
    char far *s2;
    char huge *s3;
    printf("%d, %d, %d\n", sizeof(s1), sizeof(s2), sizeof(s3));
    return 0;
}

