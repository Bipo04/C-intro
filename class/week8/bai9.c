#include <stdio.h>
#include <math.h>

int main(){
    double xn, ketqua;
    xn = 0;
    do{
        ketqua = xn;
        xn = xn - (exp(xn)+pow(xn,3)+sin(xn))/(exp(xn)+3*pow(xn,2)+cos(xn));
    } while(fabs(xn-ketqua) > 0.0001);
    printf("Ket qua = %lf\n", xn);
}