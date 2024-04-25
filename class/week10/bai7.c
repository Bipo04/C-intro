#include <stdio.h>

int main(){
    int a[100][100], n, cnt = 0, ok = 1;
    printf("Nhap ma tran vuong cap: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            if(a[i][j] != a[j][i]){
                ok = 0;
                break;
            }
        }
    }
    
    if(ok == 1)
        printf("Ma tran doi xung.\n");
    else
        printf("Ma tran khong doi xung.\n");
    return 0;
}