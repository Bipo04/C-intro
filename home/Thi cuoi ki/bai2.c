#include <stdio.h>

int main(){
    int n, a[100];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int max = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    if(max< 119)
        printf("0");
    else if(max <= 153)
        printf("1");
    else if(max <= 177)
        printf("2");
    else if(max <= 209)
        printf("3");
    else if(max <= 249)
        printf("4");
    else
        printf("5");
    return 0;
}