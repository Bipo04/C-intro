#include<stdio.h>

void getSale(long long *doanhSo) {
    int i;
    printf("Hay nhap doanh so cua 4 quy:\n");
    for (i = 0; i < 4; i++) {
        scanf("%lld", &doanhSo[i]);
    }
}

long long totalSale(long long *doanhSo) {
    int i;
    long long sum = 0;
    for (i = 0; i < 4; i++) {
        sum += doanhSo[i];
    }
    return sum;
}

int main() {
    long long a[4];
    getSale(a);
    long long Sum = totalSale(a);
    printf("Tong doanh thu: %lld\n", Sum);
    return 0;
}
