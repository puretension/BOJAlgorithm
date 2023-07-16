#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable: 4996)

#define FALSE -1; //덱에 정수 X경우

typedef struct queue
{
    int arr[51]; //front, rear구분이 무의미
    int rear;
    int count;
}queue;


void init(queue*p)
{
    p->rear = p->count = 0;
}

void push_front(queue*p, int data)
{
    for(int i = 0;i<data;i++)
    {
        p->arr[i] = i+1;
        p->rear++;
        p->count++;
    }
    p->rear--;
}

void pop_front(queue*p)
{
    for(int i = 0;i<p->rear;i++)
    {
        p->arr[i] = p->arr[i+1];
    }
    p->arr[p->rear] = 0;
    p->rear--;
    p->count--;
}

void rear_left(queue*p)
{
    int data = p->arr[0];
    for(int i =0;i<p->rear;i++)
    {
        p->arr[i] = p->arr[i+1];
    }
    p->arr[p->rear] = data;
}

void rear_right(queue*p)
{
    int data = p->arr[p->rear];
    for(int i = p->rear;i>0;i--)
    {
        p->arr[i] = p->arr[i-1];
    }
    p->arr[0] = data;
}

static int answer = 0;

int main()
{
    queue que;
    int N,M;
    scanf("%d %d", &N, &M);
    init(&que);
    push_front(&que, N);
    
    int i;
    
    int cmp[51] = {0,};
    
    for(i = 0;i<M;i++)
    {
        scanf("%d", &cmp[i]);
    }
    
    for(i = 0;i<M;i++)
    {
        int Aanswer = 0;
        int Banswer = 0;
        while(1)
        {
        if(cmp[i] == que.arr[0])
        {
            pop_front(&que);
            break;
        }
            rear_left(&que);
            Aanswer++;
        }
        Banswer = que.count+1-Aanswer;
        
        if(Aanswer<=Banswer)
        {
            answer += Aanswer;
        }
        else
            answer += Banswer;
    }
    printf("%d", answer);
    
    return 0;
}
