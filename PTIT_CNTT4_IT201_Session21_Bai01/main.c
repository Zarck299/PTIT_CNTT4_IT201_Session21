#include <stdio.h>
#include <stdlib.h>

#define SIZE 3
//Them canh vao do thi
void addEdge(int graph[SIZE][SIZE], int firstNode, int secondNode) {
    graph[firstNode][secondNode] = 1;
    graph[secondNode][firstNode] = 1;
}
void printGraph(int graph[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int graph[SIZE][SIZE] = {{0}};
    printGraph(graph);

    int firstNode, secondNode;
    scanf("%d %d", &firstNode, &secondNode);

    printf("------------------------------\n");
    addEdge(graph, firstNode, secondNode);
    printGraph(graph);
    return 0;
}