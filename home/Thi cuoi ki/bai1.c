#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[10000], cnt = 0, s = 0;
    while(1){
        scanf("%d", &a[cnt]);
        if(a[cnt] == -1)
            break;
        cnt++;
    }

    for(int i = 0 ; i < cnt; i++){
        s+= a[i];
    }
    
    if(n < 60){
        if(s < 10000)
            printf("%d", 10000-s);
        else 
            printf("0");
    }
    else if(n >= 60)
        if(s < 8000)
            printf("%d", 8000-s);
        else 
            printf("0");

    return 0;
}