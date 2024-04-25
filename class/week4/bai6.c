#include<stdio.h>
int main(){
    float wtime, paid;
    printf("Enter working time: ");
    scanf("%f", &wtime);
    if (wtime <= 40)
    {
        paid=25000*wtime;
    }
    if (wtime > 40)
    {
        paid=40000*wtime;
    }
    printf("Wage is %.2f", paid);
return 0;
}