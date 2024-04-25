#include <stdio.h>
#include <math.h>

double giaiPT(double a){
    double xn, ketqua;
    xn = a;
    do{
        ketqua = xn;
        xn = xn - (pow(xn,4) - 10*pow(xn,3)*sin(xn)-10*pow(xn,2) + xn*cos(xn) + 1) / 
                  (pow(xn,3)*(4-10*cos(xn)) - 30*pow(xn,2)*sin(xn) - xn*(20-sin(xn)) + cos(xn));
    } while(fabs(xn-ketqua) > 0.0001);
    return xn;
}
int main(){
    int n = 1, cnt = 0;
    double a[100], b[100], min = 1e5, max=-1e5;

    for(int i = -20; i <= 20; i+=2){
        a[n] = giaiPT(i);
        ++n;
    }
    
    for(int i = 1; i < n; i++){
        int j;
        for(j = 1; j < i; j++){
            if(fabs(a[i] - a[j]) < 0.00001){
                break;
            }
        }
        if(i == j){
            cnt++;
            b[cnt] = a[i];
        }
    }
    for(int i = 1; i < n; i++){
        if(a[i] < min)
            min = a[i];
        if(a[i] > max)
            max = a[i];
    }
    for(int i = 1; i <= cnt; i++)
        printf("%lf\n", b[i]);
    printf("Nghiem lon nhat: %lf\n", max);
    printf("Nghiem nho nhat: %lf\n", min);
    printf("So nghiem cua phuong trinh: %d", cnt);
    return 0;
}