#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n ; // so luong phan tu cua mang 
	int arr[100]; // Khai bao mang voi kich thuoc toi da 100 phan tu 
	
	//Buoc 1 : Nhap so luong  phan tu cua mang  
	
	printf("Nhap so luong phan tu cua mang : ");
	scanf("%d", &n ); 
	// Buoc 2 : Nhap cac gia tri cua mang 
	int i ;
	printf("Nhap cac phan tu cua mang ! \n");
	for (i = 0 ; i < n ; i++ ){
		printf("Phan tu %d :", i + 1);
		scanf("%d",&arr[i]);
	}
	// Buoc 3 : Hien thi cac gia tri da luu tru 
	printf("cac phan tu cua mang la : ");
	for (i = 0 ; i < n ; i++ ) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
