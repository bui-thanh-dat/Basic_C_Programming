#include <stdio.h>

// Tao enum ten cac cong ty
enum company {
    Google,
    Facebook,
    Xerox,
    Yahoo,
    Ebay,
    Microsoft
};

int main() {
    // Khai bao bien tu enum
    enum company myCompany;

    // Gan gia tri ban dau cho bien
    myCompany = Google;

    // Hien thi gia tri ban dau
    printf("Cong ty ban dau cua toi la: %d\n", myCompany);

    // Thay doi gia tri cua bien
    myCompany = Microsoft;

    // Hien thi gia tri sau khi thay doi
    printf("Cong ty sau khi thay doi la: %d\n", myCompany);

    return 0;
}
