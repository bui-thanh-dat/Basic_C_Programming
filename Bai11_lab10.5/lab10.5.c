#include <stdio.h>

int main() {
	int num1 = 10;
	int num2 = 20;
	
	int *pnum1 = &num1; // con tro pnum1 tro toi dia chi cua bien num1
	int *pnum2 = &num2; // con tro pnum2 tro toi dia chi cua bien num2
	
	int temp = *pnum1;
	*pnum1 = *pnum2;
	*pnum2 = temp;
	
	printf("num1: %d \n",*pnum1);
	printf("num2: %d",*pnum2); 
	
	return 0;
}
