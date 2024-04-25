#include <stdio.h>

float celcius(int f){
    return (float)(f-32)*5/9;
}

int main(){
    printf("Do F|   Do C ");
    printf("\n");
    for(int i = 0; i <= 20; i++){
        printf("%4d|%7.2f\n",i ,celcius(i));
    }
    return 0;
}