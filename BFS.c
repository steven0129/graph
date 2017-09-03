#include "bfs.h"

int main()
{
    int **adjacencyMatrix = array2D(5, 5);
    adjacencyMatrix[0][1] = 1, adjacencyMatrix[1][0] = 1;
    adjacencyMatrix[0][4] = 1, adjacencyMatrix[4][0] = 1;
    adjacencyMatrix[0][3] = 1, adjacencyMatrix[3][0] = 1;
    adjacencyMatrix[3][4] = 1, adjacencyMatrix[4][3] = 1;
    adjacencyMatrix[0][2] = 1, adjacencyMatrix[2][0] = 1;
    adjacencyMatrix[0][3] = 1, adjacencyMatrix[3][0] = 1;

    int v = 0, w; // 初始化節點
    const int nodeSize = 5; // 節點數目
    int i = 0, *visited; // 佔存變數
    
    for (i = 0; i < nodeSize; i++)
        visited[i] = 0; // 設定所有點都尚未訪問
    
    visit(v);
    visited[v] = 1;
    enQueue(v); // 根節點放入queue
    
    while (!isEmpty())
    {
        v = deQueue();
        for (w = v; w < nodeSize; w++)
        {
            if (adjacencyMatrix[v][w] && !visited[w])
            {
                visit(w);
                enQueue(w);
                visited[w] = 1;
            }
        }
    }

    return 0;
}