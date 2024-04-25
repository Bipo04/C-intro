#include<stdio.h>
#include<math.h>

int main(){
    float c,b,t;
    printf("So gio xe con dau trong bai la: ");
    scanf("%f",&c);
    printf("So gio xe buyt dau trong bai la: ");
    scanf("%f",&b);
    printf("So gio xe tai dau trong bai la: ");
    scanf("%f",&t);
    c = (int) ceil(c); //lam tron so gio len so nguyen gan nhat lon hon no
    b = (int) ceil(b);
    t = (int) ceil(t);
    float sum1,sum2,sum3;
    if(c <= 2) sum1 =  c * 0.7;
    else sum1 = (c-2) * 2.5 + 2 * 0.7;

    if(b <= 2) sum2 =  b * 1.5;
    else sum2 = (c-2) * 2 + 2 * 1.5;

    if(t <= 1) sum3 =  t * 2.5;
    else sum3 = (t-1) * 3.25 + 1 * 2.5;
    printf("Tong phi gui xe phai thanh toan la: $%.2f",sum1+sum2+sum3);
    return 0;
}