#include <stdio.h>
#include <string.h>

int main(){
    int arr[100];
    int tong=0;
    int n;
    for(int i=1; i<=100; i++){
        printf("Gia cua CD ban muon mua la: ");
        scanf("%d", &arr[i]);
        tong+=arr[i];
        if(tong<100){
            printf("Tong don hang la: %d\n", tong);
            printf("Ban muon mua tiep hay thanh toan.\n");
            printf("1. Mua tiep \n2. Thanh toan \nVUI LONG LUA CHON 1 HOAC 2:");
            scanf("%d", &n);
            if(n==1) continue;
            else break;
        }
        if(tong==100){
            printf("Don hang dat gia tri toi da, hay thanh toan ngay bay gio.");
            break;
        }
        if(tong>100){
        printf("Gia tri toi da la 100, hay nhap CD gia tri thap hon!\n");
        tong-=arr[i];
        }
    }
    printf("Cam on quy khac da su dung dich vu.");
    return 0;
}
