#include <stdio.h>
#define N 15
int main(){
    int a[N] = {1,9,0,0,1,0,0,0,0,4,0,0,0,5,6};
    
    int cnt1 = 0;
    for(int i = 0; i < N; i++){
        if(a[i] == 0)
            cnt1++;
    }
    printf("So phan tu la 0 trong mang la: %d", cnt1);
    printf("\n");
    
    int i = 0, j, cnt2, max = 0;
    for(i; i < N; i++){
        if(a[i] == 0){
            cnt2 = 0;
            for(j = i; j < N; j++){
                if(a[j] == 0){
                    cnt2++;
                }
                else break;
            }
            i = j;
            if(cnt2 > max)
                max = cnt2;
        }
    }
    printf("Chieu dai cua chuoi con lon nhat ma cac phan tu deu la 0 la: %d", max);
    printf("\n");

    int b[10];
    for(int i = 0; i < 10; i++){
        b[i] = 0;
    }
    for(int i = 0; i < N; i++){
        b[a[i]]+=1;
    }
    for(int i = 0; i < 10; i++){
        printf("So lan xuat hien cua %d la: %d", i, b[i]);
        printf("\n");
    }
    return 0;
}