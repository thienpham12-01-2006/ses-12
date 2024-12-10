#include <stdio.h>
int checkSoHoanHao(int n) {
    if (n <= 0) {
        return 0;
    }
    int tong = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            tong += i;
        }
    }
    if (tong == n) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int a, b;
    printf("Nhap vao so nguyen thu nhat: ");
    scanf("%d", &a);
    printf("Nhap vao so nguyen thu hai: ");
    scanf("%d", &b);
    if (checkSoHoanHao(a)) {
        printf("%d la so hoan hao.\n", a);
    } else {
        printf("%d khong phai la so hoan hao.\n", a);
    }
    if (checkSoHoanHao(b)) {
        printf("%d la so hoan hao.\n", b);
    } else {
        printf("%d khong phai la so hoan hao.\n", b);
    }
    return 0;
}

