#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable: 4996)

typedef struct stack
{
    int top;
}stack;


void push(stack* p)
{
    (p->top)++;
}

void pop(stack*p)
{
    (p->top)--;

}

int main()
{
    stack stk;
    int T, i;
    char K[51];
    stk.top = -1;
    scanf("%d", &T);
    while (getchar() != '\n');
    int j;
    for (i = 0; i < T; i++)
    {
        stk.top = -1;
        scanf("%s", K);
        while (getchar() != '\n');
        for (j = 0; j<strlen(K); j++)
        {
            if (K[j] == '(')
            {
                push(&stk);
            }
            else if (K[j] == ')')
            {        pop(&stk);
                    if (stk.top < -1)
                    break;
            }
        }
        if (stk.top == -1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    
    return 0;
}
