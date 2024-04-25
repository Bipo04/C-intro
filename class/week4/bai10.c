#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, delta, x1, x2;
    int mu, count = 0;
    char bien1, bien2, dau;
    
    printf("Nhap phuong trinh bac 2 co dang ax^2+bx=c: ");
    count = scanf("%f%c%*c%d%c%f%c%*c%f", &a, &bien1, &mu, &dau, &b, &bien2, &c);
    if(dau != 43) b=-b;
    if(count == 7){
        if(a == 0 || bien1 != 120 | bien2 != 120 || mu != 2)
            printf("Day khong phai phuong trinh bac 2!\n");
        else{
            delta = b*b + 4*a*c;
            if(delta < 0) 
                printf("Phuong trinh vo nghiem.");
            else if(delta == 0)
                printf("Phuong trinh co nghiem kep x1=x2=%.2f",-b/(2*a));
            else if (delta > 0){
                x1 = (-b + sqrt(delta))/(2*a);
                x2 = (-b - sqrt(delta))/(2*a);
                printf("Phuong trinh co 2 nghiem pb x1= %.2f, x2= %.2f",x1, x2);    
            }
        }
    } else printf("Day khong phai phuong trinh bac 2!\n");
    return 0;
}