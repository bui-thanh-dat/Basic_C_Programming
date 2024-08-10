#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int total_day, years ,weeks ,days ;
	
	printf("Nhap vao so ngay : ");
	scanf("%d",&total_day);
	
	// tinh so nam 
	years = total_day/365 ; 
	//tinh so tuan 
	weeks = (total_day%365) / 7 ;
	// tinh so ngay
	days = total_day % 365 % 7 ;
	
	// Hien thi 
	printf("so nam : %d \n",years);
	printf("so tuan : %d \n",weeks);
	printf("so ngay : %d \n",days);
	return 0;
}
