#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number1 , number2  ;
	float  div  ;
	printf("Nhap so thu nhat : ");
	scanf("%d",&number1);
	printf("Nhap so thu hai : ");
	scanf("%d",&number2);
	if(number2 != 0 ) {
		div  = (float)number1 / number2 ;
		printf("so chia la %.2f \n",div);
	}else {
		printf("khong the chia cho 0. \n");
	}
	return 0;
}
