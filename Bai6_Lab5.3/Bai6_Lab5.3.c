#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float temp;
	printf("Input Temperature : ");
	scanf("%f",&temp);
	if ( temp < 0 ){
		printf("Weather is Freeze! ");
	}else if (temp < 10) {
		printf("Weather so cool! ");
	} else if ( temp < 20 ){
		printf("Weather is cool! ");
	}else if (temp < 30 ){
		printf("Weather very nice!");
	} else if ( temp < 40){
		printf("Weather is hot!");
	} else {
		printf("Weather so hot !");
	}
	
	return 0;
}
