// goto statement 

#include<stdio.h>

int main(void){
    void fun();
    int i = 1;
    while(i <= 5)
    {
        printf("%d\n", i);
        if(i>2)
            goto here;
    }
return 0;
}


void fun(){
    here:
    printf("It works");
}
