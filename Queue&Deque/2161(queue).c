#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable: 4996)

typedef struct queue
{
    int front;
    int rear;
    int capacity;
    int count;
    int * arr;
}queue;

void init(queue*p, int size)
{
    p->front = p->rear = p->count = 0;
    //p->capacity = size;
    p->arr = (int*)malloc(sizeof(int) * size);
}
void enque(queue*p, int data)
{
    p->arr[p->rear]  = data;
    p->rear++;
    p->count++;
}

int deque(queue*p)
{
    int info;
    info = p->arr[0];
    for(int i = 0;i<p->rear;i++)
    {
        p->arr[i] = p->arr[i+1];
    }
    p->arr[p->rear] = 0;
    p->rear--;
    p->count--;
    int fifo = p->arr[0];
    for(int i = 0;i <p->rear;i++)
    {
        p->arr[i] = p->arr[i+1];
    }
    p->arr[p->rear] = fifo;
    return info;
}

int main()
{
    int N;
    scanf("%d", &N);
    queue que;
    init(&que, N);
    for(int i = 0;i< N;i++)
    {
        enque(&que, i+1);
    }
    que.rear--;
    for(int i = 0; i< N; i++)
    {
        int data = deque(&que);
        printf("%d ", data);
    }
    
    return 0;
}
