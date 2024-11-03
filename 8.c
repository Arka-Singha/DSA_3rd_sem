#include <stdio.h>

#define MAX_VERTICES 100

int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES];

void createGraph(int vertices)
{
    int i, j;

    for (i = 0; i < vertices; i++)
    {
        for (j = 0; j < vertices; j++)
        {
            adjacencyMatrix[i][j] = 0;
        }
    }
}

void addEdge(int startVertex, int endVertex)
{
    adjacencyMatrix[startVertex][endVertex] = 1;
    adjacencyMatrix[endVertex][startVertex] = 1;
}

void displayGraph(int vertices)
{
    int i, j;

    printf("Adjacency Matrix:\n");

    for (i = 0; i < vertices; i++)
    {
        for (j = 0; j < vertices; j++)
        {
            printf("%d ", adjacencyMatrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int vertices, edges, i, startVertex, endVertex;

    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    createGraph(vertices);

    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    for (i = 0; i < edges; i++)
    {
        printf("Enter the start and end vertex of edge %d: ", i + 1);
        scanf("%d %d", &startVertex, &endVertex);
        addEdge(startVertex, endVertex);
    }

    displayGraph(vertices);

    return 0;
}
