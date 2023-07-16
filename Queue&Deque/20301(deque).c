#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable: 4996)

typedef struct _node{
    int data;
    struct _node * next;
    struct _node * prev;
}Node;

typedef struct _dlDeque{
    Node * head;
    Node * tail;
}Deque;

void DequeInit(Deque * pdeq);
int DQIsEmpty(Deque * pdeq);

void DQAddFirst(Deque * pdeq, int data); //덱의 머리에 데이터 추가
void DQAddLast(Deque * pdeq, int data); //덱의 꼬리에 데이터 추가

int DQRemoveFirst(Deque * pdeq); //덱의 머리에서 데이터 삭제
int DQRemoveLast(Deque * pdeq); //덱의 꼬리에서 데이터 삭제

void DequeInit(Deque * pdeq){
    pdeq -> head = NULL;
    pdeq -> tail = NULL;
}

int DQIsEmpty(Deque * pdeq){
    if(pdeq -> head == NULL) return 1;
    return 0;
}


void DQAddFirst(Deque * pdeq, int data){
    Node * newNode = (Node*)malloc(sizeof(Node));
    newNode -> data = data;
    newNode -> next = pdeq -> head;

    if(DQIsEmpty(pdeq))
        pdeq ->tail = newNode;
    else
        pdeq -> head -> prev = newNode;
    newNode -> prev = NULL;
    pdeq -> head = newNode;
}

void DQAddLast(Deque * pdeq, int data){
    Node * newNode = (Node*)malloc(sizeof(Node));
    newNode -> data = data;
    newNode -> next = NULL;
    if(DQIsEmpty(pdeq))
        pdeq -> head = newNode;
    else
    {
        pdeq -> tail -> next = newNode;
    }
    newNode -> prev = pdeq -> tail;
    pdeq -> tail = newNode;
}

int DQRemoveFirst(Deque * pdeq){
    Node * delNode = pdeq -> head;
    int removeData = delNode -> data;
    pdeq -> head = pdeq -> head -> next;
    free(delNode);

    if(pdeq -> head == NULL)
        pdeq -> tail = NULL;
    else
        pdeq -> head -> prev = NULL;

    return removeData;
}

int DQRemoveLast(Deque * pdeq){
    Node * delNode = pdeq -> tail;
    int removeData;
    removeData = delNode -> data;
    pdeq -> tail = pdeq -> tail -> prev;
    free(delNode);

    if(pdeq -> tail == NULL)
        pdeq -> head = NULL;
    else
        pdeq -> tail -> next = NULL;
    return removeData;
}

int main()
{
    int N,K,M;
    scanf("%d %d %d", &N, &K, &M);
    Deque deq;
    DequeInit(&deq);
    
    for(int i = 0;i<N;i++)
        DQAddLast(&deq, i+1);
    
    int curSize = N;
    int killCount = 0;
    int flag = 1;
    
    while(curSize != 0)
    {
        if(flag == 1)
        {
            for(int i = 0;i<K-1;i++)
                DQAddLast(&deq, DQRemoveFirst(&deq));
            printf("%d\n", DQRemoveFirst(&deq));
            curSize--;
            killCount++;
        }
        else if(flag == -1)
        {
            for(int i = 0;i<K-1;i++)
                DQAddFirst(&deq, DQRemoveLast(&deq));
            printf("%d\n", DQRemoveLast(&deq));
            curSize--;
            killCount++;
        }
        if(killCount % M == 0)
            flag *= -1;
    }
    return 0;
}
