#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define MAX  50
#define m  10000

typedef struct TNode{
    char key[MAX];
    struct TNode* next;

}Node;


Node* T[m];

Node* makeNode(char* k){
    Node* p = (Node*)malloc(sizeof(Node));
    strcpy(p->key,k);
    p->next = NULL;
    return p;
}

int h(char* k){
    int c = 0;
    for(int i = 0; i < strlen(k); i++){
        c = (c*235 + k[i]) % m;
    }
    return c;
}

Node* insertList(Node* h, char* k){
    Node* p = makeNode(k);
    p->next = h;
    return p;
}
Node* findList(Node* h, char* k){
    for(Node* p = h; p != NULL; p = p->next){
        if(strcmp(p->key,k)==0) return p;
    }
    return NULL;
}
int insert(char* k){
    int i = h(k);
    Node* p = findList(T[i],k);
    if(p != NULL) return 0;
    T[i] = insertList(T[i],k);
    return 1;
}
int find(char* k){
    int i = h(k);
    Node* p = findList(T[i],k);
    if(p == NULL) return 0;
    return 1;
}
void solve(){
    char k[MAX];
    FILE* f1 = fopen("input.txt","r");
    FILE* f2 = fopen("output.txt","w");
    while(1){
        fscanf(f1, "%s", k);
        if(strcmp(k,"*") == 0) break;
        insert(k);
    }
    
    char cmd[20];
    while(1){
        fscanf(f1, "%s", cmd);
        if(strcmp(cmd,"find") == 0){
            fscanf(f1, "%s", k);
            int ans = find(k);
            fprintf(f2,"%d\n",ans);
            //printf("%d\n",ans);
            //printf("find %s = %d\n",k,ans);
        }else if(strcmp(cmd,"insert") == 0){
            fscanf(f1, "%s", k);
            int ans = insert(k);
            //printf("%d\n",ans);
            fprintf(f2,"%d\n",ans);
            //printf("insert %s = %d\n",k,ans);
        }else if(strcmp(cmd,"***") == 0){
            break;
        }
    }
   fclose(f1);
   fclose(f2);
}

int main(){

    solve();
    return 0;
}

