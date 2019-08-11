#include<stdio.h>

int main(){
    void v = 0;

    printf("%d", v);
    return 0;
}

/*

Output: 
7.c: In function ‘main’:
7.c:4:10: error: variable or field ‘v’ declared void
     void v = 0;
          ^
*/
