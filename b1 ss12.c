#include <stdio.h>
int tinhTong(int a, int b) {
    return a + b;
}
int main() {
    int x, y;
    printf("Nhap so thu nhat: ");
    scanf("%d", &x);
    printf("Nhap so thu hai: ");
    scanf("%d", &y);
    printf("Tong cua hai so la: %d\n", tinhTong(x, y));
    return 0;
}

