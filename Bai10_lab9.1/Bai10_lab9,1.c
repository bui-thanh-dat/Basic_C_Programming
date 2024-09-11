#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void my_strcat(char dest[], const char src1[], const char src2[]) {
	int i = 0 , j = 0 ;
	// noi chuoi src1 vao dest 
	while (src1[i] != '\0') {
		dest[i] = src1[i];
		i++;
	}
	// noi chuoi src2 vao dest 
	while (src2[j] != '\0') {
		dest[i] = src2[j];
		i++;
		j++;
	}
	// dam bao chuoi dest co ki tu null o cuoi 
	dest[i] = '\0';
}
bool are_strings_equal(const char str1[], const char str2[]) {
	int i = 0 ;
	
	// So sanh tung ki tu cua hai chuoi bang vong lap while 
	while (str1[i] != '\0' && str2[i] != '\0') {
		if (str1[i] != str2[i]) {
			return false ; // neu tim thay ki tu khac nhau se tro ve false 
		}
		i++;
	}
	// Sau khi vong lap dung , kiem tra xem ca 2 chuoi deu ket thuc bang '\0' hay khong 
	if (str1[i] == '\0' && str2[i] == '\0') {
		return true; // Neu ca hai keu ket thuc bang '\0' , tra ve true 
	} else {
		return false; // neu khong , tra ve false 
	}
}
int main(int argc, char *argv[]) {
	// Bai 1  
	char str[100];
	scanf("%s",str);
	int len = 0;
	while (str[len] !='\0') {
		len++ ; 
	}
	printf("Do dai cua chuoi la :  %d\n",len);
	
	// Bai 2 
	char dest[100];
	char src1[100],src2[100] ;
	printf("Nhap chuoi 1 : ");
	scanf("%s",src1);
	printf("Nhap chuoi 2 : ");
	scanf("%s",src2);
	
	my_strcat(dest,src1,src2);
	
	printf("Ket qua cua viec noi chuoi: %s\n",dest);
	
	//Bai 3
	char str1[100], str2[100];
	
	printf("Nhap chuoi 1: ");
	scanf("%s",str1);
	
	printf("Nhap chuoi 2: ");
	scanf("%s",str2);
	// Goi ham kiem tra chuoi 
	if(are_strings_equal(str1,str2)){
		printf("Hai chuoi giong nhau. \n");
	} else {
		printf("Hai chuoi khac nhau : \n");
	}
	return 0;
}
