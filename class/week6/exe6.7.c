#include<stdio.h>

int main(){
    int a;
    printf("Hay nhap so tuoi: ");
    scanf("%d",&a);
    
    int x = a / 65 + a / 18;
    switch(x)
    {
        case 0:
        printf("Tre em");
            break;
        case 1:
        case 2:
        case 3:
        printf("Nguoi lon");
            break;
        default: 
        printf("Nguoi cao tuoi");
    }
    return 0;
}