#include<stdio.h>
int main(){
    int x;
    for(x=-1; x<=10; x++){
        if(x < 5){
			//printf("IndiaBIX\n");
            continue;} 	//will continue to execte until x < 5 i.e: -1,0,1,2,3,4
        else
            break;		//will break out of condition x > 5 i.e: 6,7,8,9,10
        printf("IndiaBIX");
    }
    return 0;
}

//will not print anything as printf is outof condition and will never gets execute
