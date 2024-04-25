#include <stdio.h>
#include <string.h>

void my_strcpy(char *s, const char *t){
    while (*t != '\0'){
        *s = *t;
        s++;
        t++;
    }
    *s = '\0';
}

int main(){
    char s[] = "Hello, world!";
    char t[20];
    my_strcpy(t, s);
    printf("%s\n", t);
    return 0;
}