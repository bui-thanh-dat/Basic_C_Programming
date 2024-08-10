#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number;
	// Buoc 1 : Nhap so tu ban phim 
	printf("Nhap vao mot so nguyen bat ki : ");
	scanf("%d",&number);
	
	// Buoc 2 : dich so 1 sang trai 4 bit va su dung toan tu OR de dat bit thu 5 thanh 1 
	number = number | (1 << 4);
	
	//Buoc 3 : Hien thi ket qua ra man hinh 
	printf("So sau khi dat bit thu 5 thanh 1 la %d \n", number);
	return 0;
}
/* Nhap vào: 9 (0b00001001)

Ket qua: "So sau khi dat bit thu 5 thanh 1 la: 25"

o dây, 0b00001001 | 0b00010000 = 0b00011001 = 25. */
