#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void tach(char *str, char a[][10], int *n){
    char *ptr = strtok(str, " ");
    int i = 0;
    while(ptr != NULL){
        strcpy(a[i], ptr);
        ptr = strtok(NULL, " ");
        i++;
    }
    *n = i;
}

int compare(const void *a, const void *b){
    return strcmp((const char *)a, (const char *)b);
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

    qsort(a, n, sizeof(a[0]), compare);

    for(int i = 0; i < n; i++){
        int cnt = 1;
        while(strcmp(a[i],a[i+1]) == 0){
            cnt++;
            i++;
        }
        printf("%s %d\n", a[i], cnt);
        }
        
    return 0;
}