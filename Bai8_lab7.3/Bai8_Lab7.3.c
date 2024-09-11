#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int PrimeArr[50]; // Mang de luu cac so nguyen to 
	PrimeArr[0] = 2 ; // so nguyen to dau tien 
	PrimeArr[1] = 3 ; // so nguyen to thu hai 
	int PrimeCount = 2 ;// so luong nguyen to da luu trong mang 
	int i , j ;
	// Tim cac so nguyen to tu 4 den 100 
	for (i = 4 ; i <= 100 ; i++ ) { 
	if(i % 2 != 0) { // chi kiem tra cac so le 
		int isPrime = 1 ; // Bien de kiem tra hay xem i  co phai so nguyen to khong 
		
		// Kiem tra so i co chia het cho bat ki nao trong mang khong 
			for (j = 0 ; j < PrimeCount ; j++ ) { 
			if( i % PrimeArr[j] == 0 ) { 
			isPrime = 0 ; // i khong phai la so nguyen to 
			break ;
			}
		}
		// neu i la so nguyen to them vao mang  
			if(isPrime) { 
			PrimeArr[PrimeCount] = i ; 
			PrimeCount++ ;
			}
		}
	}
	//In ra toan bo  cac so nguyen to trong mang PrimeArr 
	printf("Cac so nguyen to trong khoang tu 0 den 100 la : \n "); 
	for ( i = 0 ; i < PrimeCount; i++ ) { 
	printf("%d ",PrimeArr[i]);
	}
	printf("\n");
	return 0;
}
