#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char str1[100],str2[100];
	int c1 = 0, c2 = 0 ;
	int i,j,flg;
	
	printf("Nhap chuoi thu 1: ");
	scanf("%s",str1);
	printf("Nhap chuoi thu 2: ");
	scanf("%s",str2);
	
	//Tinh do dai cua cac chuoi 
	c1= strlen(str1);
	c2= strlen(str2);
	
	flg = 0 ; // Bien co de kiem tra su xuat hien cua chuoi con  
	
	//Kiem tra su xuat hien cua chuoi con 
	for (i = 0 ; i <= c1-c2; i++ ) {
		flg = 1; // Gia su chuoi con xuat hien 
		for ( j = 0; j < c2 ; j++ ) {

			if(str1[i+j] != str2[j]) {
				flg = 0 ; // Neu co ki tu khac thi chuoi con khong xuat hien 
				break;
			}
		}
		if (flg == 1) {
			break;// neu tim thay chuoi con thi thoat khoi vong lap 
		}
	}
	//Ket qua kiem tra 
		if (flg == 1) {
		printf("Chuoi con xuat hien trong chuoi .\n\n");
		} else {
		printf("Chuoi con khong xuat hien trong chuoi. \n\n");
		}
	return 0;
}
