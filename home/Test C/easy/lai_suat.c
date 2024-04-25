#include <stdio.h>

int main(){
    double m, d, r, tong = 0;
    scanf("%lf %lf %lf", &m, &r, &d);
    double a = m/(d*12);
    for(int i = 0; i < d * 12; i++) {
        double lai = (m-a*i)*r/12;
        tong = tong + a + lai;
    }
    printf("%.2lf %.2lf", tong, tong - m);
    return 0;
}