#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable: 4996)
typedef struct _Node{
    int data;
    struct _Node * next;
}Node;


typedef struct _Queue{
    Node * front;
    Node * rear;
}Queue;

void QueueInit(Queue * q)
{
    q->front = q->rear = NULL;
}

void enqueue(Queue * q, int data){
    Node * newNode = (Node*)malloc(sizeof(Node));
    newNode -> data = data;
    newNode -> next = NULL;
    
    if(q->front == NULL)
    {
        q->front = newNode;
        q->rear = newNode;
    }
    
    else{
        q->rear->next = newNode;
        q->rear = newNode;
    }
}

void display(Queue *q)
{
    Node * curNode = q->front;
    do{
        printf("%d ", curNode->data);
        curNode = curNode -> next;
    }while(curNode != NULL);
}

int dequeue(Queue * q){
    Node * delNode = q->front;
    int deleteData = delNode->data;
    q->front = delNode->next;
    free(delNode);
    
    return deleteData;
}



int main()
{
    int N,K;
    scanf("%d %d", &N,&K);
    Queue q;
    QueueInit(&q);

    int curSize = N;
 
    for(int i = 0;i<N;i++)
        enqueue(&q, i+1);

    //display(&q);
    
    printf("<");
    while(curSize != 0)
    {
        for(int i = 0;i<K-1;i++)
        {
            int x= dequeue(&q);
            enqueue(&q, x);
        }
        if(curSize != 1)
        {
            printf("%d, ", dequeue(&q));
            curSize--;
        }
        else
        {
        printf("%d>", dequeue(&q));
        curSize--;
        }
    }
 
    return 0;
}
