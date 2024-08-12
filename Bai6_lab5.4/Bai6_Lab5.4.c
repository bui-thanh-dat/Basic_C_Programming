#include <stdio.h>
#include <stdlib.h>
#define PAYRATE  12.00 // $12 / hour
#define TAXRATE_300 0.15 // 15% 
#define TAXRATE_450 0.20 // 20% 
#define TAXRATE_REST 0.25 // 25% 
#define OVERTIME 40 // hour 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// dercale variables 
	unsigned int hour = 0 ;
	double grossPay = 0.0 ;
	double taxes =  0.0 ;
	double netPay = 0.0 ; 
	
	printf("Input hour : ") ;
	scanf("%u",	&hour);
	// calculate the gross pay 
	if ( hour <= OVERTIME  )
	// neu so gio lam viec nho hon hoac bang 40 , tinh luong theo gio co ban  
	grossPay = hour * PAYRATE ;
	else {
		// Neu so gio lam viec lon hon 40 , tinh luong cho 40 gio co ban va luong lam them gio 
		grossPay = OVERTIME * PAYRATE ; // Luong cho 40 gio co ban 
		double overTimePay = ( hour - OVERTIME ) * ( PAYRATE * 1.5 ); // Luong cho gio lam them 
		grossPay += overTimePay ;
	}
	// calculate taxes 
	
	if (grossPay <= 300) {
		// Neu luong gross nho hon hoac bang 300 , thue 15% cua luong gross 
    	taxes = grossPay * TAXRATE_300;
	} else if (grossPay <= 450) {
    	taxes = 300 * TAXRATE_300; // Thue cho 300 dau tien  
   	 	taxes += (grossPay - 300) * TAXRATE_450; // Thue cho phan vuot qua 300 
	} else {
		// Neu luong lon hon 450 
    	taxes = 300 * TAXRATE_300; // Thue cho 300 dau tien 
    	taxes += 150 * TAXRATE_450; // Thue cho 150 tiep theo 
    	taxes += (grossPay - 450) * TAXRATE_REST; // Thue cho phan vuot qua  450 
	}

	// calculate the netpay 
	netPay = grossPay - taxes; // Luong net = luong gross - thue 
	
	//display output 
	printf("Your gross pay this week is : %.2f\n",grossPay);
	printf("Your taxes this week is : %.2f\n",taxes);
	printf("Your net pay this week is : %.2f\n",netPay);
	return 0;
}
