#include<stdio.h>
#include<string.h>

char uname[] = "admin";
char passd[] = "admin123";

void main() {
	char password[10], username[10], ch;
	int i;
	int uans, upass;
 	char chd;

	printf("Enter User name: ");
	scanf("%[^\n]s", username);
	chd = getchar();
	printf("Enter the password < any 8 characters>: ");
	for (i = 0; i < 8; i++) {
        ch = getchar();
        password[i] = ch;
        ch = '*' ;
        printf("%c", ch);
	}
    password[i] = '\0';

	printf("\nYour password is :");
	for (i = 0; i < 8; i++) {
            printf("%c", password[i]);
	}
	printf("\n");

	//uans = strcmp(username,uname);
	//upass = strcmp(password,passd);
	printf("%d", strcmp(username,uname));
	printf("%d", strcmp(password,passd));

	if(strcmp(username,uname)==0) {
		if(strcmp(password,passd)==0)		
			printf("\nAuthentication successfull\n");
		else
			printf("\nVWrong username and password\n");
	} else {
		printf("\nDWrong username and password\n");	
	}
}
