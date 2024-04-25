#include <stdio.h>

void incomePlus(int *income,int year){
    if(year > 3) 
        *income+=300000;
}

int main(){
    int income, year;
    printf("Nhap luong hien tai va so nam da qua tinh tu nam dau cua luong hien tai: ");
    scanf("%d %d",&income, &year);
    incomePlus(&income, year);
    if(year > 3)
        printf("Luong sau khi tang: %d", income);
    else
        printf("Luong cua ban duoc giu nguyen.");
    return 0;
}