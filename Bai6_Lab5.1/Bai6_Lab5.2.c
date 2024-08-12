#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float sothunhat , sothuhai ;
	printf("Nhap so thu nhat va so thu hai \n");
	scanf("%f %f", &sothunhat , &sothuhai);
	//Kiem tra mot trong hai so khong phai so nguyen 
	if ((sothunhat != (int)sothunhat )|| (sothuhai != (int)sothuhai)){
		printf("so nhap vao khong phai so nguyen\n ");
	} else if (sothunhat == sothuhai){
		printf("So thu nhat bang so thu hai \n");
	}else if (sothunhat > sothuhai){
		printf("so thu nhat lon hon so thu hai\n");
	} else {
		printf("so thu hai lon hon so thu nhat\n");
	}
	return 0;
}

