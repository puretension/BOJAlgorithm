#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable: 4996)
#define NEVER -1

typedef struct stack
{
    int *arr;
    int top;
    int capacity;
}stack;

void stackInit(stack*p, int size)
{
    p->arr = (int*)malloc(sizeof(int)*size);
    p->top = 0;
    p-> capacity = size;
}

void push(stack*p, int data)
{
    p->arr[p->top] = data;
    (p->top)++;
}

int pop(stack*p)
{
    if(p->top<=0)
        return -99999;
    (p->top)--;
    return p->arr[p->top];
}


int main()
{
    int N;
    char choice[10];
    int data;
    stack stk;
    scanf("%d", &N);
    while(getchar() != '\n');
    stackInit(&stk,N);
    int key = 1;
    int nokey = 0;
    for(int i = 0;i<N;i++)
    {
        scanf("%s", choice);
        if(strcmp(choice,"push") == 0)
        {
            scanf("%d", &data);
            while(getchar() != '\n');
            push(&stk, data);
        }
        
        if(strcmp(choice,"pop") == 0)
        {
            data = pop(&stk);
            if(data == -99999)
            printf("%d\n", NEVER);
            else
                printf("%d\n", data);
        }
        
        if(strcmp(choice,"size") == 0)
        {
            printf("%d\n", stk.top);
        }
        
        if(strcmp(choice,"empty") == 0)
        {
            if(stk.top<=0)
                printf("%d\n", key);
            else
                printf("%d\n", nokey);
        }
        
        if(strcmp(choice,"top") == 0)
        {
            if(stk.top <= 0)
            printf("%d\n", NEVER);
            
            else
            printf("%d\n",stk.arr[(stk.top)-1]);
        }
    }
    
    return 0;
}
