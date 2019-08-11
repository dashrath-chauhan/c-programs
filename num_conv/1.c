			//binary to decimal conversion
			//Author: Dashrath Chauhan

#include <stdio.h>
#include <string.h>
#include <math.h>
 
int main(void){
    char bin[32]={0};
    int dec,i;
    int count;   /*for power index*/
 
    printf("Enter binary value: ");
    gets(bin);
 
    count=0;
    dec=0;
    for(i=(strlen(bin)-1);i>=0;i--){
        dec=dec+(bin[i]-0x30)*pow((double)2,(double)count);
        count++;
    }
 
    printf("DECIMAL value is: %d",dec);
 
    return 0;
}
