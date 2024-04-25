#include <stdio.h>
#include <string.h>

int main(){
    char s[10][5] = {"thap", "nhat", "nhi", "tam", "tu", "ngu" , "luc", "that", "bat", "cuu"};
    char str[30];
    int n;
    scanf("%d", &n);
    if(n < 1 || n > 99)
        printf("-1");
    else if(n <= 10){
        printf("%s", s[n%10]);
    }
    else{
        if(n <= 19){
            printf("thap %s", s[n%10]);
        }
        else{
            strcpy(str, s[n/10]);
            strcat(str, " thap ");
            strcat(str, s[n%10]);
            printf("%s", str);
        }
    }
    return 0;
}