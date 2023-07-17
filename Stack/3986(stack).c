#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable: 4996)

typedef struct stack{
    char str[1000001];
    int top;
}Stack;

void stackInit(Stack * pstack){
    pstack -> top = -1;
}

int isEmpty(Stack * pstack){
    if(pstack -> top == -1)
        return 1;
    return 0;
}

void push(Stack * pstack, char alphabet)
{
    pstack->top++;
    pstack -> str[pstack->top] = alphabet;
    return;
}

void pop(Stack * pstack){
    if(isEmpty(pstack))
        return;
    pstack->top--;
}


int main(void){
    int count = 0;
    int n;
    Stack stk;
    scanf("%d", &n);
    char word[1000001];
    for(int i = 0;i<n;i++)
    {
        stackInit(&stk); //매 단어에 맞는 스택 생성
        scanf("%s", word); //word입력
        unsigned long wordLen = strlen(word);
        for(int j = 0;j<wordLen;j++)
        {
            if(!isEmpty(&stk) && stk.str[stk.top] == word[j])
                pop(&stk);
            else push(&stk,word[j]);
        }
        if(isEmpty(&stk)) count++;
    }
    printf("%d\n", count);
    return 0;
}
