#include <stdio.h>
void Mang(int arr[], int n) {
    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int n;
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu cho mang:\n");
    for (int i = 0; i < n; i++) {
    printf("Phan tu %d: ", i + 1);
    scanf("%d", &arr[i]);
    }
    Mang(arr, n);
    return 0;
}

