#include "dfs.h"
#define NODE_SIZE 5

int **adjacencyMatrix;
int visited[NODE_SIZE];

int main()
{
    adjacencyMatrix = array2D(NODE_SIZE, NODE_SIZE);
    adjacencyMatrix[0][1] = 1, adjacencyMatrix[1][0] = 1;
    adjacencyMatrix[0][4] = 1, adjacencyMatrix[4][0] = 1;
    adjacencyMatrix[0][3] = 1, adjacencyMatrix[3][0] = 1;
    adjacencyMatrix[3][4] = 1, adjacencyMatrix[4][3] = 1;
    adjacencyMatrix[0][2] = 1, adjacencyMatrix[2][0] = 1;
    adjacencyMatrix[0][3] = 1, adjacencyMatrix[3][0] = 1;

    int i = 0;
    for (i = 0; i < NODE_SIZE; i++)
        visited[i] = 0;

    
    dfs(0);

    return 0;
}

void dfs(int v)
{
    int w;
    
    visited[v] = 1; // mark v as visited
    visit(v);

    for (w = v; w < NODE_SIZE; w++)
    {
        if (adjacencyMatrix[v][w] && !visited[w])
            dfs(w);
    }
}