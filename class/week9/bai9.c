#include <stdio.h>

int isLeapYear(int n){
    if(n % 4 == 0){
        if(n % 100 == 0){
            if(n % 400 == 0){
                return 1;
            }
            else
                return 0;
        }
        else
            return 1;
    }
    else
        return 0;
}

int main(){
    int n;
    printf("Nhap nam can tinh: ");
    scanf("%d", &n);
    if(isLeapYear(n))
        printf("Nam nhuan.");
    else
        printf("Nam khong nhuan.");
    return 0;
}