#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_KEYS 10500
#define MAX_LENGTH 51

int findKey(char keys[MAX][m], int numKeys, char key[m]){
    for(int i = 0; i < numKeys; i++){
        if(strcmp(keys[i], key) == 0){
            return 1;
        }
    }
    return 0;
}

int main() {
    char str[MAX][m];
    int cnt = 0;
    do{
        scanf("%s", str[cnt]);
        cnt++;
        getchar();
    } while (strcmp(str[cnt - 1], "*") != 0);
    cnt--;

    char** a = (char**) malloc(MAX * sizeof(char*));
    for(int i = 0; i < MAX; i++){
        a[i] = (char*) malloc((m + 8) * sizeof(char));
    }

    int cnt2 = 0;
    do{
        fgets(a[cnt2], m + 8, stdin);
        a[cnt2][strcspn(a[cnt2], "\n")] = '\0';
        cnt2++;
    } while(strcmp(a[cnt2 - 1], "***") != 0);
    cnt2--;

    for(int i = 0; i < cnt2; i++){
        char *ptr = strtok(a[i], " ");
        char command[7];
        strcpy(command, ptr);
        ptr = strtok(NULL, " ");
        char key[m];
        strcpy(key, ptr);

        if(strcmp(command, "find") == 0){
            if(findKey(str, cnt, key)){
                printf("1\n");
            }
            else{
                printf("0\n");
            }
        }
        if(strcmp(command, "insert") == 0){
            if(findKey(str, cnt, key) == 0){
                strcpy(str[cnt], key);
                cnt++;
                printf("1\n");
            }
            else{
                printf("0\n");
            }
        }
    }

    for(int i = 0; i < MAX; i++){
        free(a[i]);
    }
    free(a);

    return 0;
}