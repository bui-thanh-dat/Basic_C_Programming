#include <stdio.h> 

int main() {
	//Khai bao 3 bien con tro theo 3 kieu du lieu  
	int *pInt ;
	float *pFloat ;
	char  *pChar ;
	
	//Khoi tao 3 bien con tro nhan gia tri bat ky 
	int valueInt = 42; // gia tri Int 
	float valueFloat = 3.14; // gia tri float 
	char valueChar = 'A'; // gia tri char 
	
	pInt = &valueInt; // Gan gia tri cua valueInt cho pInt 
	pFloat = &valueFloat; // Gan gia tri cua valueFloat cho pFloat
	pChar = &valueChar; // Gan gia tri cua valueChar cho pChar
	
	
	printf("Dia chi cua con tro Int: %p, Gia tri con tro tro toi %d\n",(void*)pInt,*pInt);
	printf("Dia chi cua con tro Float:%p, Gia tri con tro tro toi %.2f\n",(void*)pFloat,*pFloat);
	printf("Dia chi cua con tro Double:%p, Gia tri con tro tro toi %c",(void*)pChar,*pChar);
	
	
	
	return 0;
}
