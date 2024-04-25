#include <stdio.h>

int a[100];

void getJudgeDate(){
    int ok;
    printf("Nhap diem: ");
    do{
        ok = 0;
        for(int i = 1; i <= 5; i++){
            scanf("%d", &a[i]);
        }
        for(int i = 1; i <= 5; i++){
            if(a[i] < 0 || a[i] > 10){
                printf("Du lieu khong hop le.\nVui long nhap lai: ");
                ok = 1;
            }
        }
    } while(ok);
}
void calcScore(){
    int S = 0, min = 10, max = 0;
    for(int i = 1; i <= 5; i++){
        S+=a[i];
        if(a[i] < min)
            min = a[i];
        if(a[i] > max)
            max = a[i];
        }
    S = S - min - max;
    printf("Diem binh quan cua thi sinh la: %.2f", (float)S/3);
}
int main(){
    getJudgeDate();
    calcScore();
    return 0;
}