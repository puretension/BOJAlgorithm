#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable: 4996)
#define NEVER -1

typedef struct intQueue
{
    int front;
    int rear;
    int count;
    int capacity;
    int* arr;
}intQueue;


void queueInit(intQueue* p, int size)
{
    p->arr = (int*)malloc(sizeof(int) * size);
    p->front = p->rear = p->count = 0;
    p->capacity = size;
}

void push(intQueue* p, int data)
{
    p->arr[p->rear] = data;
    (p->rear)++;
    (p->count)++;

    if (p->rear >= p->capacity)
        p->rear = 0;

}

int pop(intQueue* p)
{
    int delValue;
    if (p->count == 0)
        return -99999;
    delValue = p->arr[p->front];
    (p->front)++;
    (p->count)--;
    if (p->front >= p->capacity)
        p->front = 0;

    return delValue; //삭제된 값 리턴
}

int front(intQueue* p)
{
    if ((p->count) < 1)
        return -1;

    return p->arr[p->front];

}

int main()
{
    intQueue que;
    char choice[10];
    int N;
    int data;
    scanf("%d", &N);
    while (getchar() != '\n');
    queueInit(&que, N);
    int zero = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%s", choice);
        if (strcmp(choice, "push") == 0)
        {
            scanf("%d", &data);
            push(&que, data);
            while (getchar() != '\n');
        }

        if (strcmp(choice, "pop") == 0)
        {
            data = pop(&que);
            if (data == -99999)
                data = NEVER;
            printf("%d\n", data);
        }

        if (strcmp(choice, "size") == 0)
        {
            printf("%d\n", que.count);
        }

        if (strcmp(choice, "empty") == 0)
        {
            if (que.count < 1) //front와 rear값 동일시 빈 큐라 판단
                printf("%d\n", 1);
            else
                printf("%d\n", zero);
        }

        if (strcmp(choice, "front") == 0)
        {
            int key = front(&que);
            printf("%d\n", key);
        }

        if (strcmp(choice, "back") == 0)
        {
            if (que.count <= 0)
                printf("%d\n", NEVER);
            else
                printf("%d\n", que.arr[que.rear - 1]);
        }

    }
    return 0;
}
