#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) { 
// Buoc 1: tao mang 2 chieu voi cac gia tri la luong mua ( don vi mm ) 
	float rainfall[3][12] = 
	{
		{120, 95, 85, 75, 100, 110, 140, 130, 90, 100, 115, 105},  // Luong mua nam 1
        {100, 85, 80, 70, 90, 105, 130, 125, 85, 95, 110, 100},   // Luong mua nam 2
        {110, 90, 85, 80, 95, 100, 135, 120, 88, 98, 112, 107}    // Luong mua nam 3
	 } ;
	 
// Buoc 2 : Hien thi luong thua theo nam 
int year,month;
printf("Luong mua theo nam : \n");
for (year = 0 ;year < 3 ; year++ ){
	printf("Nam %d: ", year + 1 );
	for(month = 0 ; month < 12 ; month++ ){
		printf("%.2f ",rainfall[year][month]);
	}
	printf("\n");
}
printf("\nLuong mua trung binh cua moi thang : \n");
for(month = 0 ; month < 12 ; month++ ) {
	float total = 0 ;
	for (year = 0 ; year < 3 ; year++ ) {
		total += rainfall[year][month];
	}
	float average = (float)total / 3 ; //chia cho so nam de tinh trung binh 
	printf("Thang %d : %.2f mm\n", month + 1,average);
}
	return 0;
}
