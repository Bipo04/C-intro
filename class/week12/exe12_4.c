#include<stdio.h>
void list_subArr(int *arr){
    int i,j,k;
    for (i=0; i<4; i++){
        for(j=i; j<4; j++){
            for (k=i; k<=j; k++){
            printf("%d ", *(arr+k));
            }
            printf("\n");
        }
    
    }
}
int main(){
    int a[]={1,3,4,2};
    list_subArr(a);
    return 0;
}