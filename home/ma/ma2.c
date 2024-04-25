#include <stdio.h>
#include <math.h>

int check(char *a){
    if(a[0] - 'a' < 0 || a[0] - 'a' > 7 ||
       a[1] - '0' < 1 || a[1] - '0' > 8)
       return 0;
    return 1;
}
int main(){
    char a[40][3];
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%s", a[i]);
    }

    //int matran[8][8] = {0}, 
    int ok = 1, d = 1;
    //matran[a[0] - 'a', a[0] - '0'] = 1;
    for(int i = 1; i < n; i++){
        if(check(a[i])){
            if(fabs(a[i][0] - a[i-1][0]) * fabs(a[i][1] -a[i-1][1]) != 2){
                ok = 0;
                break;
            }
            // if(matran[a[0] - 'a', a[0] - '0'] == 0){
            //     matran[a[0] - 'a', a[0] - '0'] = 1;
            //     d++;
            // }
        }
        else{
            printf("0");
            return 0;
        }
    }
    if(ok != 0)
        printf("1");
    else
        printf("0");
    return 0;
}