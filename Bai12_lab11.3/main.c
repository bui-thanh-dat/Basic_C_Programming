#include <stdio.h> 

int main() {
	int n ,i , max ;
	int *ptr; // con tro de duyet mang
	
	// Buoc 1: Nhap so luong phan tu cua mang 
	printf("Nhap so luong phan tu cua mang: ");
	scanf("%d",&n);
	
	//Khai bao mang rong
	int arr[n];
	
	//Buoc 2: Nhap cac phan tu cua mang 
	printf("Nhap cac phan tu cua mang:\n");
	for (i = 0; i < n; i++) {
		printf("Phan tu thu %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	//Buoc 3: Gan con tro toi mang va tim so lon nhat
	ptr = arr;
	max = *ptr; // Gan gia tri dau tien cho mang max 
	
	//Buoc 4: Dung con tro va vong lap de tim so lon nhat 
	
	for ( i = 1; i < n; i++ ){
		if (*(ptr+i) > max ) {
			max = *(ptr+i);
		}
	}
	// Buoc 5: Hien thi so lon nhat 
	printf("So lon nhat trong mang la: %d\n",max);
	
	return 0; 
} 
