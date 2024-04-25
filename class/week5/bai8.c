#include <stdio.h>
#define N 100

int main(){
    int n, a[N], b[N], c[N], cnt1 = 0, cnt2 = 0, cnt3 = 0, m, l;
    printf("Nhap so nguyen duong muon chuyen thanh so nhi phan: ");
    scanf("%d", &n);

    m = n;
    for(int i = 1; m > 0; i++){  
        a[i]= m % 2;  
        m /= 2;
        cnt1++;
    }  
    printf("Dang nhi phan cua so vua nhap la = ");  
    for(int i = cnt1; i >= 1; i--){  
        printf("%d",a[i]);  
    } 

    //Thuc hien phep dich phai (>>) 
    l = n >> 2;

    for(int i = 1; l > 0; i++){  
        b[i]= l % 2;  
        l /= 2;
        cnt2++;
    }  
    printf("\nDang nhi phan sau khi thuc hien phep dich phai la: ");  
    for(int i = cnt2; i >= 1; i--){  
        printf("%d",b[i]);  
    }
    //Thuc hien phep dich trai (<<) 
    n = n << 2;

    for(int i = 1; n > 0; i++){  
        c[i]= n % 2;  
        n /= 2;
        cnt3++;
    }  
    printf("\nDang nhi phan sau khi thuc hien phep dich phai la: ");  
    for(int i = cnt3; i >= 1; i--){  
        printf("%d",c[i]);  
    }
    return 0;
}