#include <stdio.h>
#include<stdlib.h>
#define n 20
#define UNVISITED 0
#define VISITED 1
void matrix(int A[n][n], int vertices) {
for (int i = 1; i <= vertices; i++) {
for (int j = 1; j <= vertices; j++) {
A[i][j] = 0;
}
}
}
void addedges(int A[n][n], int u, int v) {
A[u][v] = 1;
A[v][u] = 1;
}
void DFS(int A[n][n], int vertices, int start, int visited[n]) {
visited[start] = VISITED;
printf("%d ", start);
for (int i = 1; i <= vertices; i++) {
if (A[start][i] == 1 && visited[i] == UNVISITED) {
DFS(A, vertices, i, visited);
}
}
}
void BFS(int A[n][n], int vertices, int start, int visited[n]) {
int queue[n];
int front = -1, rear = -1;
visited[start] = VISITED;
printf("%d ", start);
queue[++rear] = start;
while (front != rear) {
int current = queue[++front];
for (int i = 1; i <= vertices; i++) {
if (A[current][i] == 1 && visited[i] == UNVISITED) {
visited[i] = VISITED;
printf("%d ", i);
queue[++rear] = i;
}
}
}
}
int main() {
int edges, vertices, A[n][n], u, v;
printf("Name: Harsh Ojha\n");
printf("RollNo: 2230607\n");
printf("Enter the total number of vertices:\n");
scanf("%d", &vertices);
matrix(A, vertices);
printf("Enter the total number of edges:\n");
scanf("%d", &edges);
for (int i = 1; i <= edges; i++) {
printf("Enter edge (u v): ");
scanf("%d %d", &u, &v);
addedges(A, u, v);
}
printf("The resultant adjacency matrix is:\n");
for (int i = 1; i <= vertices; i++) {
for (int j = 1; j <= vertices; j++) {
printf("%d ", A[i][j]);
}
printf("\n");
}
int visited[n];
for (int i = 1; i <= vertices; i++) {
visited[i] = UNVISITED;
}
int choice, startVertex;
while(1){
printf("\nMenu:\n");
printf("1. Depth-First Traversal\n");
printf("2. Breadth-First Traversal\n");
printf("3. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
printf("Enter the starting vertex for DFS: ");
scanf("%d", &startVertex);
printf("DFS Traversal: ");
DFS(A, vertices, startVertex, visited);
break;
case 2:
printf("Enter the starting vertex for BFS: ");
scanf("%d", &startVertex);
printf("BFS Traversal: ");
for (int i = 1; i <= vertices; i++) {
visited[i] = UNVISITED;
}
BFS(A, vertices, startVertex, visited);
break;
case 3:
exit(0);
}
}
return 0;
}