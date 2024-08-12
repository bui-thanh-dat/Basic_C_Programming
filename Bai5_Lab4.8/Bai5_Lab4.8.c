#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a , b, c ,d ; 
	printf("Nhap so thu nhat : ");
	scanf("%d",&a);
	printf("Nhap so thu hai : ");
	scanf("%d",&b);
	printf("Nhap so thu ba : ");
	scanf("%d",&c);
	printf("Nhap so thu tu : ");
	scanf("%d",&d);
	
	printf(" so binh phuong cua so thu nhat : %d \n" ,a*a);
	printf(" so binh phuong cua so thu hai : %d \n" ,b*b);
	printf(" so binh phuong cua so thu ba : %d \n" ,c*c);
	printf(" so binh phuong cua so thu tu : %d " ,d*d);
	return 0;
}
