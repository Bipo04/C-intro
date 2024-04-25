#include <stdio.h>

typedef struct bai5{
    float gk, ck, hs, tongket;
    int trongso;
} diem;

int main(){
    int n;
    scanf("%d", &n);
    diem a[n];
    for(int i = 0; i <n; i++){
        scanf("%f %f %f %d", &a[i].gk, &a[i].ck, &a[i].hs, &a[i].trongso);
        a[i].tongket = a[i].gk*a[i].trongso + a[i].ck*(1-a[i].trongso);
    }
    float tb, tong = 0;
    for(int i = 0; i <n; i++){
        tong = tong + a[i].tongket;
    }
    tb = tong / n;
    char rank;
    if(tb >= 8.5)
        rank = 'A';
    else if(tb >= 7.5)
        rank = 'B';
    else if(tb >= 6.5)
        rank = 'C';
    else 
        rank = 'D';

    int cnt  = 0;
    for(int i = 0; i < n; i++){
        if(a[i].tongket < 6.5)
            cnt++;
    }
    if(rank == 'A' || rank == 'B'){
        if(cnt >= n/3){
            rank+=1;
        }
    }

    printf("%c", rank);
    return 0;
}