#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a , b, c ,d ,avg; 
	printf("Nhap so thu nhat : ");
	scanf("%f",&a);
	printf("Nhap so thu hai : ");
	scanf("%f",&b);
	printf("Nhap so thu ba : ");
	scanf("%f",&c);
	printf("Nhap so thu tu : ");
	scanf("%f",&d);
	avg = (a+b+c+d)/4 ;
	printf("Trung binh cong la : %.2f",avg);
	return 0;
}
