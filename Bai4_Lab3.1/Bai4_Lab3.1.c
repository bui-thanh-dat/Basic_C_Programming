#include <stdio.h> 

int main(){
	// khai b�o bi�n v� chi�u r�ng  
	float chieuDai , chieuRong ; 
	//Nh�p gia tri cho chieu Dai va chieu R�ng  
	printf("Nhap chieu dai cua hinh chu nhat : ");
	scanf("%f",&chieuDai);

	printf("Nhap chieu rong cua hinh chu nhat : ");
	scanf("%f",&chieuRong);
	// tinh chu vi va dien tich  
	float chuVi = 2 * (chieuDai + chieuRong);
	float dienTich = chieuDai * chieuRong ;
	// In ra man hinh voi 1 ket qua voi mot chu so thap phan 
	printf("Chu vi cua hinh chu nhat co chieu dai %.1f va chieu rong %.1f la %.1f\n",chieuDai,chieuRong,chuVi);
	printf("Dien tich cua hinh chu nhat co chieu dai %.1f va chieu rong %.1f la %.1f\n",chieuDai,chieuRong,dienTich); 
	return 0 ;
}
