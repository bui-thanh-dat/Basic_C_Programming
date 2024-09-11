#include <stdio.h> 
#include <stdbool.h>


int main(){
	
	printf("\n%d\n",compare("thanhdat","thanhdat"));
	
	return 0 ;
} 

bool compare(const char s1[], const char s2[]) {
	int i = 0 ;
	char *ptr1 = s1;
	char *ptr2 = s2;
	bool isEquals = false ;
	
	while ( *(ptr1 + i) == *(ptr2 + i) && *(ptr1 + i != '\0') && *(ptr2 + i != '\0') ) {
		++i ;
	}
	
	if (*(ptr1 + i) == '\0' && *(ptr2 + i ) == '\0') {
		isEquals = true ;
	} else {
		isEquals = false ;
	}
	return isEquals; 
}
