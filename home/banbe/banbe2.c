#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void * a, const void * b){
    return (*(int*)a - *(int*)b);
}

int main(){
    int a[100000][2];
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < m; i++){
        scanf("%d %d", &a[i][0], &a[i][1]);
    }
    for(int i = 1; i <= n; i++){
        int d = 0, b[100000];
        for(int j = 0; j < m; j++){
            if(a[j][0] == i){
                b[d] = a[j][1];
                d++;
            }
            if(a[j][1] == i){
                b[d] = a[j][0];
                d++;
            }
        }
        if(d > 0){
            qsort(b, d, sizeof(b[0]), cmpfunc);
            for(int j = 0; j < d; j++){
                printf("%d ", b[j]);
            }
        }
        printf("\n");
    }
    return 0;
}