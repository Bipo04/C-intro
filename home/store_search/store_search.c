#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_KEYS 10000
#define MAX_LENGTH 50

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
    } while(strcmp(str[cnt - 1], "*") != 0);
    cnt--;

    char a[MAX][m + 8];
    int cnt2 = 0;
    char b[5000][m] = {""};
    int cnt3 = 0;
    do{
        fgets(a[cnt2], sizeof(a[cnt2]), stdin);
        a[cnt2][strcspn(a[cnt2], "\n")] = '\0';
        
        char *ptr = strtok(a[cnt2], " ");
        char command[7];
        strcpy(command, ptr);
        ptr = strtok(NULL, " ");
        char key[m];
        strcpy(key, ptr);

        if(strcmp(command, "find") == 0){
            if(findKey(str, cnt, key) || findKey(b, cnt3, key)){
                printf("1\n");
            }
            else{
                printf("0\n");
            }
        }
        if(strcmp(command, "insert") == 0){
            if(findKey(str, cnt, key) == 0 || findKey(b, cnt3, key) == 0){
                strcpy(b[cnt3], key);
                cnt3++;
                printf("1\n");
            }
            else{
                printf("0\n");
            }
        }
        cnt2++;
    } while(strcmp(a[cnt2 - 1], "***") != 0);
    cnt2--;

    return 0;
}