#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number ;
	
	//Nhap so tu ban phim  
	printf("Nhap vao mot so nguyen bat ki : ");
	scanf("%d",&number);
	
	//Dich phai 2 bit va su dung toan tu AND voi 1 de kiem tra bit thu 3 
	int bit_third = ( number>>2 ) & 1 ;
	
	//hien thi ket qua 
	if (bit_third == 1 ) {
		printf("Bit thu 3 la bit 1. \n");
	} else {
		printf("Bit thu 3 la bit 0 .\n");
	}
	return 0;
}
