#include <stdio.h>

int main(){
    float x, y;
    printf("Nhap 2 so thuc x, y: ");
    scanf("%f %f", &x, &y);
    if(x > y) 
        printf("x lon hon y");
    else if(x == y) 
        printf("x bang y");
    else 
        printf("x nho hon y");
    return 0;
}