#include <stdio.h>
#include <stdlib.h>

#define SIZE 3
//Them canh vao do thi
void addEdge(int graph[SIZE][SIZE], int node1, int node2) {
    graph[node1][node2] = 1;
    graph[node2][node1] = 1;
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
    addEdge(graph, 1, 0);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 0);
    printGraph(graph);
    return 0;
}