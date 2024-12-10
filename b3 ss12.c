#include <stdio.h>
int giaiThua(int n) {
    int ketQua = 1;
    for(int i = 1; i <= n; i++) {
    ketQua *= i;
    }
    return ketQua;
}
int main() {
    int n;
    printf("Nhap so nguyen: ");
    scanf("%d", &n);
    if (n < 0) {
    printf("Giai thua khong xac dinh cho so am.\n");
    } else {
    printf("Giai thua cua %d la: %d\n", n, giaiThua(n));
    }
    return 0;
}

