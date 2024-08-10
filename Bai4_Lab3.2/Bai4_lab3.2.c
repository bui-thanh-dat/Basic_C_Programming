#include <stdio.h>

// T?o enum tên các công ty
enum company {
    Google,
    Facebook,
    Xerox,
    Yahoo,
    Ebay,
    Microsoft
};

int main() {
    // Su dung enum de khai báo mot bien
    enum company myCompany;

    // Gán giá tri cho bien tu enum
    myCompany = Google;

    // Hien thi gia tri cua bien
    printf("My Company is : %d\n", myCompany);

    return 0;
}
