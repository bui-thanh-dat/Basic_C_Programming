#include  <stdio.h> 

int main() {
	int a = 51;
	
	int *ptr = (int)&a;
	
	*ptr = 15;
	
	printf("Gia tri sau khi thay doi tu 51 thanh %d",a);
	return 0 ;
}
