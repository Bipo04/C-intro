#include <stdio.h>
#include <string.h>
#include <ctype.h>



int main(){
    char s[256];
    scanf("%[^\n]s", s);
    int n = strlen(s);
    char str[256] = "";
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(isalpha(s[i])){
            str[cnt] = toupper(s[i]);
            cnt++;
        }
    }
    str[cnt] = '\0';
    int b[256], dem;
    for(int i = 0; i < cnt; i++){
        b[i] = 1;
    }
    if(strlen(str) == 0){
        printf("-1");
    }

    for(int i = 0; i < cnt; i++){
        for(int j = i+1; j < cnt; j++){
            if(str[i] > str[j]){
                char c = str[i];
                str[i] = str[j];
                str[j] = c;
            }
        }
    }

    for(int i = 0; i < cnt; i++){
        if(b[i] == 1){
            b[i] = 0;
            dem = 1;
            for(int j = i+1; j < cnt; j++){
                if(str[j] == str[i]){
                     dem++;
                    b[j] = 0;
                }
            }
        printf("%c %d\n", str[i], dem);
        }
    }
    return 0;
}