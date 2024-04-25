#include <stdio.h>

int main(){
    float diem = 0, tong;
    int cnt = 0;
    do{
        printf("Nhap diem: ");
        scanf("%f", &diem);
        if(diem > 0){
            cnt++;
            tong+=diem;
        }
    } while(diem > 0);
    printf("Diem trung binh: %.2f", tong/cnt);
    return 0;
}