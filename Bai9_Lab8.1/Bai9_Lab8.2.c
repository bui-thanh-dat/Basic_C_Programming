#include <stdio.h>
#include <math.h> // use sqrt() 

	// prorotype cac ham 
	int UCLN(int a , int b); 
	float giatrituyetdoi (float x ) ; 
	long giaithua(int n ) ;
	float khoangcach (float Ax , float Ay , float Bx, float By );


int main(int argc, char *argv[]) {
	int a, b, n;
    float x, y, Ax, Ay, Bx, By;


    printf("Nhap hai so nguyen de tim UCLN: ");
    scanf("%d %d", &a, &b);
    printf("UCLN cua %d va %d la: %d\n", a, b, UCLN(a, b));


    printf("Nhap mot so de tinh gia tri tuyet doi: ");
    scanf("%f", &x);
    printf("Gia tri tuyet doi cua %.2f la: %.2f\n", x, giatrituyetdoi(x));


    printf("Nhap so nguyen de tinh giai thua: ");
    scanf("%d", &n);
    printf("%ld! = %ld\n", n, giaithua(n));


    printf("Nhap toa do diem A (Ax, Ay): ");
    scanf("%f %f", &Ax, &Ay);
    printf("Nhap toa do diem B (Bx, By): ");
    scanf("%f %f", &Bx, &By);
    printf("Khoang cach giua diem A va B la: %.2f\n", khoangcach(Ax, Ay, Bx, By));

	
	return 0;
}
// Ham tim uoc chung lon nhat 
int UCLN (int a, int b ) { 
int r ;
while ( b!= 0 ) {
	r = a % b ;
	a = b ;
	b = r ;
}
return a ;
}
//Ham tinh gia tri tuyet doi 
float giatrituyetdoi(float x )  {
	if ( x < 0 ){
		return -x ;
	}
	return x ;
}

// Ham tinh giai thua 
long giaithua (int n) { 
	if (n == 0) {
		return 1 ;
	} else {
		return n * giaithua(n-1);
	}
}

// Ham tinh khoang cach giua 2 diem A va B trong khong gian Oxy 
float khoangcach(float Ax , float Ay , float Bx , float By ) { 
return sqrt ((Ax-Bx)*(Ax-Bx)+(Ay-By)*(Ay-By));
}














