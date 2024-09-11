#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// Buoc 1: Khai bao bien va chuoi can thiet 
	int n , i , j , temp;
	
	printf("Nhap so luong chuoi : ");
	scanf("%d",&n);
	
	char string[n][100]; // Mang luu cac chuoi 
	
	// Buoc 2: Nhap cac chuoi ki tu vao bang vong lap for 
	for ( i = 0; i < n ; i++ ) {
		printf("Nhap chuoi thu %d : ", i+1);
		scanf("%s",string[i]);
	}
	// Buoc 3 va 4: Dung vong lap for de xap xep chuoi da nhap 
	for ( i = 1 ; i <= n; i++ ) {
		for ( j = 0 ; j <= n-1 ; j++ ) {
			if (strcmp(string[j],string[i]) > 0 ) {
				strcmp(temp,string[j]);
				strcmp(string[j],string[j+1]);
				strcmp(string[j+1],temp);
			}
		}
	}
	//Buoc 5: Hien thi cac chuoi theo thu tu da sap xep 
	printf("Cac chuoi sau khi da xap xep: \n");
	for (i = 0 ; i < n ; i++ ) {
		printf("%s\n",string[i]);
	}
	return 0;
}
