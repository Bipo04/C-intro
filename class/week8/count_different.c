#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    int count = 0;

    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                break;
            }
        }
        // Nếu không tìm thấy phần tử trùng lặp, tăng biến đếm.
        if (i == j) {
            count++;
        }
    }

    printf("So luong phan tu khac nhau la: %d", count);

    return 0;
}