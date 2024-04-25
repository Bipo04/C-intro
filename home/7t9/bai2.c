//so sanh tien dien
#include <stdio.h>

float tiendien1(int n){
    float tien;
    if(n <= 50)
        tien = (float)n * 1.728;
    else if(n <= 100)
        tien = (float)(n - 50) * 1.786 + 50 * 1.728;
    else if(n <= 200)
        tien = (float)(n - 100) * 2.074 + 50* 1.786 + 50*1.728;
    else if(n <= 300)
        tien = (float)(n - 200) * 2.612 + 100 * 2.074 + 50* 1.786 + 50*1.728;
    else if(n <= 400)
        tien = (float)(n - 300) * 2.919 + 100 * 2.612 + 100 * 2.704 + 50* 1.786 + 50*1.728;
    else   
        tien = (float)(n - 400) * 3.015 + 100 * 2.919 + 100 * 2.612 + 100 * 2.704 + 50* 1.786 + 50*1.728;
    return tien*1100;
}

float tiendien2(int n){
    float tien;
    if(n <= 100)
        tien = (float)n * 1.728;
    else if(n <= 200)
        tien = (float)(n - 100) * 2.074 + 100 * 1.728;
    else if(n <= 400)
        tien = (float)(n - 200) * 2.612 + 100 * 2.074 + 100 * 1.728;
    else if(n <= 700)
        tien = (float)(n - 400) * 3.111 + 200 * 2.612 + 100 * 2.704 + 100 * 1.728;
    else   
        tien = (float)(n - 700) * 3.457 + 300 * 3.111 + 200 * 2.612 + 100 * 2.704 + 100 * 1.728;
    return tien*1100;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%.2f", tiendien2(n) - tiendien1(n));
    return 0;
}