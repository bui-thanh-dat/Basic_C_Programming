#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str[100];
	int i , j ;
	printf("Nhap chuoi can muon loai bo ki tu : ");
	scanf("%s",str);
	
	for ( i = 0 ; str[i] != '\0'; i++ ) {
		if (!(str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || str[i] == '\0') {
			for ( j = i ; str[j] != '\0'; j++ ) {
				str[j] = str[j+1];
			}
			str[j] = '\0';
			i--;
		}

	} 
	printf("Chuoi sau khi da duoc xu ly : %s \n",str);
	return 0;
}
