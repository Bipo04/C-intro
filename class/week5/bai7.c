#include <stdio.h>
#define N 100

int main(){
    int n, a[N], b[N], cnt = 0;
    printf("Nhap so nguyen duong muon chuyen thanh so nhi phan: ");
    scanf("%d", &n);

    for(int i = 1; n > 0; i++){  
        a[i]= n % 2;  
        n /= 2;
        cnt++;
    }  
    printf("Dang nhi phan cua so vua nhap la = ");  
    for(int i = cnt; i >= 1; i--){  
        printf("%d",a[i]);  
    } 

    return 0;
}