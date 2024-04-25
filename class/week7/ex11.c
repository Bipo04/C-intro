#include <stdio.h>
#include <math.h>

int check(long long n){
    long long sum = 1;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            if(i != n/i)
                sum = sum + i + n/i;
    }
    if(sum == n) return 1;
    return 0;
}

int main(){
    for(long long i = 1; i <= 1000000; i++){
        if(check(i))
            printf("%lld ", i);
    }
    return 0;
}   