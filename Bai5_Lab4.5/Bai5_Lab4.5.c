#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("Kich thuoc cua double: %lu byte \n", sizeof(double));
	printf("Kich thuoc cua char: %lu byte \n", sizeof(char));
	printf("Kich thuoc cua int: %lu byte \n", sizeof(int));
	printf("Kich thuoc cua long: %lu byte \n", sizeof(long));
	printf("Kich thuoc cua long long: %lu byte \n", sizeof(long long));
	printf("Kich thuoc cua float: %lu byte \n", sizeof(float));
	
	return 0;
}
