#include <stdio.h>
#include <string.h>

int isIsomorphic(char s[], char t[]){
    int len_s = strlen(s);
    int len_t = strlen(t);

    if(len_s != len_t){
        return 0;
    }

    int max_length = len_s;
    char c[max_length + 1];
    
    int a[256] = {0};
    int b[256] = {0};

    char str1[max_length + 1];
    char str2[max_length + 1];

    int n = 0, h = 0;

    for(int i = 0; i < max_length; i++){
        if(a[(unsigned char)s[i]] == 0){
            a[(unsigned char)s[i]] = 1;
            str1[n++] = s[i];
        }
    }

    for(int i = 0; i < max_length; i++){
        if(b[(unsigned char)t[i]] == 0){
            b[(unsigned char)t[i]] = 1;
            str2[h++] = t[i];
        }
    }

    str1[n] = str2[h] = '\0';

    if(n != h) {
        return 0;
    }
    else{
        int l = 0;
        while(l < n){
            for(int i = 0; i < max_length; i++){
                if(s[i] == str1[l]){
                    c[i] = str2[l];
                }
            }
            l++;
        }
        c[max_length] = '\0';
        
        return strcmp(c, t) == 0;
    }
}
int main(){
    char s[]= "dada";
    char t[]= "baba";
    int a = isIsomorphic(s,t);
    printf("%d", a);
    return 0;
}