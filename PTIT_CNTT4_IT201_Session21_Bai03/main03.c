#include <stdio.h>
#include <stdlib.h>

#define SIZE 3
//Them canh vao do thi
void addEdge(int graph[SIZE][SIZE], int startNode, int endNode) {
    graph[startNode][endNode] = 1;
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

    int startNode = 1;
    int endNode = 2;
    addEdge(graph, startNode, endNode);
    printGraph(graph);
    return 0;
}