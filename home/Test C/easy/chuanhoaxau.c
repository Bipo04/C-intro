#include <stdio.h>
#include <string.h>
#include <ctype.h>

void chuanhoa(char* s){
    if(s==NULL) return;
    char *s2 = s;
    for(; *s2 != '\0'; s2++){
        if(isspace(*s2) == 0) // tim vi tri dau tien khac khoang trang
            break;
    }
    
    for(; *s2 != '\0'; s2++){
        if(isspace(*s2) && isspace(*(s2+1)))  // neu co 2 dau cach lien nhau thi bo qua
            continue;
        else{
            *s = *s2;
            s++;
        }
    }
    *s='\0';
}
int main(){
    char s[10000];
    scanf("%[^\n]s", s);
    chuanhoa(s);
    s[0] = toupper(s[0]);
    if(strlen(s) == 0)
        printf("EMPTY");
    else
        printf("%s", s);
    return 0;
}