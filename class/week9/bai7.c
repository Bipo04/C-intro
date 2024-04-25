#include <stdio.h>

void check(int n){
    int cntLe = 0, cntChan = 0;
    while(n){
        if(n % 2 == 0)
            cntChan++;
        else 
            cntLe++;
        n/=10;
    }
    printf("n co %d chu so le, %d chu so chan.", cntLe, cntChan);
}

int main(){
    int n;
    printf("Enter n(n > 0): ");
    scanf("%d", &n);
    check(n);
    return 0;
}