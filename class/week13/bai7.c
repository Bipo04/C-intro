#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%[^\n]", str);
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == ',' || str[i] == '.' || str[i] == ';' ||
           str[i] == ':' || str[i] == '?' || str[i] == '!')
            str[i] = ' ';
    }
    printf("%s", str);
    return 0;
}