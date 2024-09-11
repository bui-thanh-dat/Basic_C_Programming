#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// buoc 1 : khai bao mang va bien so luong tu 
	int arr[101];
	int n ; 
	int i , j ;
	// Buoc 2 : nhap so luong phan tu 
	
	do {
		printf("Nhap so luong phan tu (1 - 101) : ") ;
		scanf("%d",&n );
		if ( n < 1 || n > 101 ) {
			printf("so luong phan tu phai o trong 1 den 101 : \n");
		}
	} while ( n < 1 || n > 101 ) ; 
	// Buoc 3 : Nhap cac phan tu cua mang 
	printf("Nhap %d phan tu : \n ", n); 
	for(i = 0 ; i < n ; i++ ) {
		printf("Phan tu %d :" ,i + 1 ) ;
		scanf("%d",&arr[i]);
	}
	//Buoc 4 : Sap xep mang theo thu tu giam dan 
	for( i = 0 ; i < n -1 ; i++ ) { 
	for(j = i + 1 ; j < n ; j++ ) {
		if(arr[i] < arr[j]) {
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp ;
			}
		}
	} 
	printf("\nMang sap xep theo thu tu giam dan : \n ");
	for(i = 0 ; i < n ; i++ ){
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
