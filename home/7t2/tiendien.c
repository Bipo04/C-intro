#include<stdio.h> 
//tinh tien dien
int main(){ 
    double x,d,tong; 
    float n; 
    scanf("%lf%f", &x, &n); 
    d = x*n*30; 
    if(d >= 0 && d <= 50){ 
        tong = d * 1678; 
    } 
    else{ 
        if(d>=51 && d<=100){ 
            tong= 83900 + (d-50)*1734; 
        } 
        else{ 
            if(d>=101&&d<=200){ 
            tong =83900 + 86700 + (d-100)*2014; 
            } 
            else{ 
                if(d >= 200&& d <= 300){ 
                    tong = 83900 + 86700 + 201400 + (d-200)*2536; 
                } 
                else{ 
                    if(d >= 301 && d <= 400){ 
                        tong = 83900 + 86700 + 2014 + 253600 +(d-300)*2834; 
                    } 
                    else{ 
                        tong = 83900 + 86700 + 201400 + 253600 + 283400 + (d-400)*2927; 
                    } 
                } 
            } 
        } 
    } 
    printf("%.2lf", tong*108/100); 
    }