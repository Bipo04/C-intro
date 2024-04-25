#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void * a, const void * b){
    return (*(int*)a - *(int*)b);
}

int main(){
    int n, a[100000];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    qsort(a, n, sizeof(int), cmpfunc);

    for(int i = 0; i < n; i++ ){  
        printf("%d ", a[i]);
    }
    
    return 0;
}