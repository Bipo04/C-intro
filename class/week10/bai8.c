#include <stdio.h>

void swapArray(float a[], int n){
    float temp;
    for(int i = 1; i <= n/2; i++){
            temp = a[i];
            a[i] = a[n+1-i];
            a[n+1-i] = temp;
    }
}

int main(){
    float a[100];
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%f", &a[i]);
    }
    swapArray(a,n);
    for(int i = 1; i <= n; i++){
        printf("%.2f ", a[i]);
    }
    return 0;
}