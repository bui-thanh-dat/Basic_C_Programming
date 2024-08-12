#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Khai bao bien theo dang khong am 
	unsigned int  ID_nv , salary , hours_work , salary_hours ;
	//Nhap thong tin 
	printf("Nhap ID nhan vien : ");
	scanf("%u",&ID_nv);
	printf("Nhap tong so gio lam viec trong 1 thang : ");
	scanf("%u",&salary_hours);
	printf("Nhap so tien lam duoc moi gio :") ;
	scanf("%u",&hours_work);
	// Tinh tien luong 
	salary = salary_hours * hours_work ;
	// Hien thi thong tin 
	printf("ID nhan vien : %u \n",ID_nv);
	printf("So luong nhan duoc trong 1 thang qua : %u\n",salary);
	return 0;
}
