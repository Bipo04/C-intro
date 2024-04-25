#include <stdio.h>

int arr[1001];

void sang(){
    for(int i = 1; i <= 1000; i++){
        arr[i]=1;
    }
    arr[0] = arr[1] = 0;
    for(int i = 1; i <= 1000; i++){
        if(arr[i]){
            for(int j = i*i; j <= 1000; j+=i){
                arr[j]=0;
            }
        }
    }
}

int main(){
    int n;
    sang();
    do{
        printf("Enter n (n>0): ");
        scanf("%d", &n);
        if(n <= 0){
            printf("Please enter n again!\n");
        }
    }while(n <= 0);
    if(arr[n])
        printf("Day la so nguyen to.");
    else
        printf("Day khong la so nguyen to.");
    return 0;
}