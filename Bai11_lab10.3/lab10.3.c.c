#include <stdio.h>

int main() {
	int num1,num2 ;
	
	printf("Nhap so thu nhat: ");
	scanf("%d",&num1);
	
	printf("Nhap so thu hai: ");
	scanf("%d",&num2);
	
	int *pnum1 = &num1;
	int *pnum2 = &num2;
	
	if(*pnum1 > *pnum2) {
		printf("so %d lon nhat trong 2 so", *pnum1 );
	} else if (*pnum1 < *pnum2){
		printf("so %d lon nhat trong 2 so", *pnum2 );
	} else {
		printf("hai so bang nhau");
	}
	return 0;
}
