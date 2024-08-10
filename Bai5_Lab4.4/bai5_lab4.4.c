#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float  years , days ; 
	int total_minutes ;
	printf("Tong so phut : ");
	scanf("%d",&total_minutes); 
	
	days = (float)total_minutes / 60 / 24   ; 
	years = days / 365 ; 
	
	printf("So nam : %.20f ", years);
	printf("So ngay : %.20f ", days);  
	
	
	return 0;
}
