#include <stdio.h>

int main() {
    char name[50];  // Khai bao mang de luu tru ten, toi da 50 ky tu

    // Yeu cau nguoi dung nhap ten
    printf("Nhap ten cua ban: ");
    scanf("%s", name);  // Doc ten nguoi dung nhap vao

    // Hien thi cau chao
    printf("Hello %s. How are you?\n", name);

    return 0;
}
