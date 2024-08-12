#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a ;
	printf("Nhap vao so can kiem tra : ");
	scanf("%d",&a);
	if ( a % 2 == 0){
		printf("Day la so chan !");
	} else {
		printf("Day la so le ! ");
	}
	return 0;
}
