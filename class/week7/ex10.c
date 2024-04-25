#include <stdio.h>

int main(){
    int n;
    unsigned long long gt = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        gt *= i*1ll;
    }
    printf("%lld", gt);
    return 0;
}