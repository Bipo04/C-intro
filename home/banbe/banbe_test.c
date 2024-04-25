#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100000

typedef struct TNode {
    int vertex;
    struct TNode* next;
} TNode;

TNode* adjacencyList[MAX_VERTICES];

void addEdge(int u, int v) {
    TNode* newNode = (TNode*)malloc(sizeof(TNode));
    newNode->vertex = v;
    newNode->next = adjacencyList[u];
    adjacencyList[u] = newNode;
}

void printNeighbors(int u) {
    TNode* current = adjacencyList[u];
    while (current != NULL) {
        printf("%d ", current->vertex);
        current = current->next;
    }
    printf("\n");
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        addEdge(u, v);
        addEdge(v, u);
    }

    for (int i = 1; i <= n; i++) {
        printNeighbors(i);
    }

    return 0;
}