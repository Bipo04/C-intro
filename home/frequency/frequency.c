#include <stdio.h>
#include <string.h>
#include <ctype.h>

void tach(char *str, char a[][21], int *n){
    char delimiters[] = " ";
    char *ptr = strtok(str, delimiters);
    int i = 0;
    while(ptr != NULL){
        strcpy(a[i], ptr);
        ptr = strtok(NULL, delimiters);
        i++;
    }
    *n = i;
}

int main(){
    char s[1000], str[1000000] ="";
    while (fgets(s, sizeof(s), stdin) != NULL) {
        int len = strlen(s);
        s[len-1] = '\0';
        strcat(str, s);
    }
    
    int n = 0;
    char a[100000][10];
    tach(str, a, &n);

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(strcmp(a[i], a[j]) > 0){
                char temp[21];
                strcpy(temp, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], temp);
            }
        }
    }

    char b[n][10];
    int dem[n];
    for(int i = 0; i < n; i++){
        dem[i]=0;
    }
    int d = 0;
    dem[0] = 1;
    strcpy(b[0], a[0]);

    for(int i = 1; i < n; i++){
        if(strcmp(a[i],a[i-1]) == 0){
            dem[d]++;
        }
        else{
            d++;
            dem[d]++;
            strcpy(b[d],a[i]);
        }
    }
    for(int i = 0; i <=d; i++){
        printf("%s %d\n", b[i], dem[i]);
    }
    return 0;
}
