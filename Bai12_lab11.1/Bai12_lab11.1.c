#include <stdio.h> 

int main() {
	int i = 0	 , j;
	char string[] = "BuiThanhDat";
	char *ptr = string; 
	
	while(*(ptr + i) != '\0') {
		i++;
	}
	i--; // Chinh i ve ki tu cuoi cung 
	
	for (j = i ; j >= 0 ; j--) {
		printf("%c",*(ptr + j));
	}
	printf("\n");
	return 0;
} 
