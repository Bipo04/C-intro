//boi cua n < 1000
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
        if(n >= 1 && n <= 999){
        for(int i = 100 / n -1; i < 1000/n +1; i++){
            if(n*i>=100 && n*i<=999)
                printf("%d ", n * i);
        }
    }
    return 0;
}