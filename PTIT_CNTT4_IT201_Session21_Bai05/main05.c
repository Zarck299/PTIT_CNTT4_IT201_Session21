#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

typedef struct Node {
    int data;
    struct Node *next;
} Node;
Node* createNode(int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Loi cap phat bo nho!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void addEdge(Node *graph[], int scr, int dest) {
    Node *newNodeDest = createNode(dest);
    newNodeDest->next = graph[scr];
    graph[scr] = newNodeDest;
    Node *newNodeScr = createNode(scr);
    newNodeScr->next = graph[dest];
    graph[dest] = newNodeScr;
}
void printGraph(Node *graph[]) {
    for (int i = 0; i < SIZE; i++) {
        printf("Node %d: ", i);
        Node *temp = graph[i];
        while (temp != NULL) {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}
int main() {
    Node *graph[SIZE] = {NULL};
    addEdge(graph, 1, 2);
    printGraph(graph);
    printf("\n");
    addEdge(graph, 0, 1);
    printGraph(graph);

    return 0;
}