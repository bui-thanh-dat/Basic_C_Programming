#include <stdio.h> 

int main() {
	//Khai bao bien 
	int num1,num2 ;
	
	//Khai bao con tro 
	int *pnum1 = &num1;
	int *pnum2 = &num2;
	
	printf("nhap so thu nhat : ");
	scanf("%d",pnum1);
	
	printf("nhap so thu hai : ");
	scanf("%d",pnum2);
	
	printf("tong cua hai so la %d\n",(*pnum1) +(*pnum2));
	return 0;
}
