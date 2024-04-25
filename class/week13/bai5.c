#include <stdio.h>
#include <string.h>
#include <ctype.h>

void getName(char *str, char *name){
    while(*str != '\0'){
        if(isspace(*str))
            break;
        str++;
    }
    str++;
    while(*str != '\0'){
        *name = *str;
        str++;
        name++;
    }
    *name = '\0';       
}
int main(){
    char str[20];
    char name[20];
    scanf("%[^\n]", str);
    getName(str, name);
    printf("%s", name);
    return 0;
}
