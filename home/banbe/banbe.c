#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int matran[n+1][n+1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            matran[i][j] = 0;
        }
    }
    int a, b;
    while(m > 0){
        scanf("%d %d", &a, &b);
        matran[a][b] = 1;
        matran[b][a] = 1;
        m--;
    }
    for(int i = 1; i <= n; i++){
        int ok = 0;
        for(int j = 1; j <= n; j++){
            if(matran[i][j] == 1){
                ok = 1;
                printf("%d ", j);
            }
            if(j==n && ok == 1)
                printf("\n");
        }
    }
    return 0;
}
