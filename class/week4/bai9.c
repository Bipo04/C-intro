#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, delta, x1, x2;
    char d;
    do{
        printf("Nhap phuong trinh bac 2: ");
        scanf("%f%*c%*c%*c%c%f%*c%*c%f", &a, &d, &b, &c);
        if(a == 0)
            printf("Day khong phai phuong trinh bac 2!\n");
    } while (a == 0);
    if (d != 43 ) b=-b;
    if (a != 0){
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
    return 0;
}