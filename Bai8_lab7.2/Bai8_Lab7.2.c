#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int  n; 
	int arr[100];
	int  i ; 
	printf("Nhap so luong phan tu cua mang : ") ;
	scanf("%d", &n);
	
	printf("Nhap cac phan tu cua mang : \n") ;
	for ( i = 0 ; i < n ; i++ ) { 
		printf("phan tu %d : ", i+1);
		scanf("%d",&arr[i]); 
	}

	printf("Cac phan tu mang theo thu tu nguoc lai : ") ;
	for ( i = n -1 ; i >= 0 ; i-- ) { 
	printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
