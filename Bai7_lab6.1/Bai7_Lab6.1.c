#include <stdio.h>

int main() {
    int n; 
    printf("Input your number: ");
    scanf("%d", &n); 
    int i ;
    for ( i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
