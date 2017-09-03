#include <stdlib.h>
#include <stdio.h>

int **array2D(int rowNum, int colNum)
{
    int i = 0, j = 0;
    int **ptr2 = NULL;
    ptr2 = (int **)malloc(sizeof(int *) * rowNum);

    for (i = 0; i < rowNum; i++)
    {
        ptr2[i] = (int *)malloc(sizeof(int) * colNum);
        for (j = 0; j < colNum; j++)
            ptr2[i][j] = 0;
    }

    return ptr2;
}

void visit(int v)
{
    printf("visit node No.%d\n", v);
}