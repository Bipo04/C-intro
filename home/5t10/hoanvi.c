#include <stdio.h>
#define N 100
int n_hangXe;
int k;
int a[N] = { 0 }, b[N] = { 0 };
int cnt;

void solution(){
    for(int i = 1; i <= n_hangXe; i++) 
        printf("%d ", a[i]);
    printf("\n");
}

void Try(int j){
    for(int i = 1; i <= n_hangXe; i++){
        if(b[i] == 0){
            a[j] = i;
            b[i] = 1;
            if (j == n_hangXe) 
                solution();
            else
                Try(j+1);
            a[j] = 0;
            b[i] = 0;
        }
    }
}

int main(){
    scanf("%d", &n_hangXe);
    Try(1);
    return 0;
}