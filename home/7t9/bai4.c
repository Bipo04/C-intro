//kiem tra co phai la 1 hoan vi hay khong
#include <stdio.h>

int main(){
    int a, b, arr1[100000], arr2[100000];
    scanf("%d", &a);
    if(1<=a && a<=100){
        while(a > 0){
            int ok = 1;
            scanf("%d", &b);
            for(int i = 1; i <= b; i++){
                scanf("%d", &arr1[i]);
            }
            for(int i = 1; i <= b; i++){
                arr2[i] = 0;
            }
            for(int i = 1; i <= b; i++){
                if(arr1[i] < 0){
                    arr1[i] = - arr1[i];
                }
                arr2[arr1[i]]++;
            }
            for(int i = 1; i <= b; i++){
                if(arr2[i] != 1){
                    ok = 0;
                    break;
                }
            }
            printf("%d\n", ok);
            a--;
        }
    }
    return 0;
}