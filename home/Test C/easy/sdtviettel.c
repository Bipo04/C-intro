#include <stdio.h>
#include <string.h>

int main(){
    //096, 097, 098, 086, 032, 033, 034, 035, 036, 037, 038, 039
    char a[20];
    scanf("%s", a);
    if(strlen(a) == 10){
        int n = (a[1] - '0')*10 + (a[2] - '0');
        if(a[0] == '0' && (n == 96 || n == 97 || n == 98 || n == 86 || n == 32 || 
        n == 33 || n == 34 || n == 35 || n ==36 || n == 37 || n == 38 || n == 39))
            printf("1");
        else
            printf("0");
    }
    if(strlen(a) == 11){
        int n = (a[2] - '0')*10 + (a[3] - '0');
        if(a[0] == '8' && a[1] == '4' && (n == 96 || n == 97 || n == 98 || n == 86 || n == 32 || 
        n == 33 || n == 34 || n == 35 || n ==36 || n == 37 || n == 38 || n == 39))
            printf("1");
        else
            printf("0");
    }
    return 0;
}