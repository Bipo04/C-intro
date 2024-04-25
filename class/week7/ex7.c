#include <stdio.h>
#include <math.h>

int check(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int main(){
    int m = 1000;
    int n = 3;
    int cnt = 0;
    printf("Cac so nguyen to nho hon 1000 la:\n");
    printf("2 ");
    while(n <= 1000 ){
        if(check(n)){
            printf("%d ", n);
            cnt++;
            if(cnt % 10 == 0) printf("\n");
        }  
        n+=2;
    }
    return 0;
}