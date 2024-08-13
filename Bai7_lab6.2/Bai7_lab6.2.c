#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a =65 , b = 0 ;
	
	printf("You need guess number have 2 number ! \n "); 
	scanf("%d",&b);
	
	while ( b != a ) {
		printf("Input your number again :  ");
		scanf("%d",&b);
		if ( b != a ) {
			printf("You wrong! try again ^^ \n");
		}
		
	}
	printf("Congratulations!!!");
	return 0;
}
