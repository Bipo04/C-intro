//So luong cac so co khong qua 1 chu so 1
#include <stdio.h>

int main(){
    int soluong=0;
    for(int i=1; i<=999; i++){
        int a=i;
        int count=0;
        while(a >= 1){
            if(a%10 == 1){
                count+=1;
            }
            a/=10;
        }
        if(count<2){ 
            printf("%d\t",i);
            soluong+=1;
        }
    }
    printf("\n So luong cac so co khong qua 1 chu so 1 la: %d", soluong);
    return 0;
}