#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define MAX_QUEUE 100
int queue[MAX_QUEUE];
int front = 0, rear = 0;

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

void enQueue(int item)
{
    if (rear >= MAX_QUEUE - 1)
        printf("queue is full!!\n");
    else
        queue[++rear] = item;
}

int deQueue()
{
    if (front > rear)
        printf("No item, queue is empty!!\n");
    else
        return queue[front++];
}

int isEmpty()
{
    return front == rear;
}