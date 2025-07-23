#include <stdio.h>
#include <stdlib.h>

//Xay dung cau truc do thi
typedef struct Graph{
    //So dinh trong do thi
    int V;
    //Ma tran dai dien cua do thi
    int **matrix;
}Graph;
//Xay dung ham khoi tao do thi
Graph *createGraph(int V){
    Graph *graph = (Graph *)malloc(sizeof(Graph));
    graph->V = V;
    //Cap phat bo nho cho mang 2 chieu
    graph->matrix = (int **)malloc(V*sizeof(int *));
    for(int i = 0; i < V; i++){
        graph->matrix[i] = (int *)calloc(V, sizeof(int));
    }
    return graph;
}
//Xay dung ham ket noi 2 dinh
void addEdge(Graph *graph, int scr, int dest) {
    graph->matrix[dest][scr] = 1;
    graph->matrix[scr][dest] = 1;
}
//Xay dung ham in do thi
void printGraph(Graph *graph) {
    for(int i = 0; i < graph->V; i++) {
        for (int j = 0; j <graph->V; j++) {
            printf("%d ", graph->matrix[i][j]);
        }
        printf("\n");
    }
}
void printMatrix(Graph *graph) {
    for(int i = 0; i < graph->V; i++) {
        printf("%d ", i);
        for(int j = 0; j <graph->V; j++) {
            if (graph->matrix[i][j] == 1) {
                printf("%d", j);
            }
        }
        printf("\n");
    }
    //0: 1 3
    //1: 0
    //2: 0
    //3: 0
}
int main(){
    Graph *graph = createGraph(4);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 3);
    addEdge(graph, 1, 2);
    printf("Ma tran ke: \n");
    printGraph(graph);
    printf("Danh sach ke: \n");
    printMatrix(graph);
    return 0;
}