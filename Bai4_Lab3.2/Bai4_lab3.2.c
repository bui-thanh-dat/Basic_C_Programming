#include <stdio.h>

// T?o enum t�n c�c c�ng ty
enum company {
    Google,
    Facebook,
    Xerox,
    Yahoo,
    Ebay,
    Microsoft
};

int main() {
    // Su dung enum de khai b�o mot bien
    enum company myCompany;

    // G�n gi� tri cho bien tu enum
    myCompany = Google;

    // Hien thi gia tri cua bien
    printf("My Company is : %d\n", myCompany);

    return 0;
}
