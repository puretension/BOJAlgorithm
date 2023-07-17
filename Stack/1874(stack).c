#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#pragma warning(disable: 4996)

typedef struct intstack
{
    int * arr;
    int top;
    int capacity;
}intstack;


char answer[200000];

int main()
{
    int N;
    int i;
    intstack stk;
    scanf("%d", &N);
    
    stk.arr = (int*)malloc(sizeof(int) * N);
    
    for(i = 0;i<N;i++)
    {
        stk.arr[i] = 0;
    }
    
    stk.top = 0;
    stk.capacity = N;
    
    int * K = (int*)malloc(sizeof(int) * N); //비교 복사봇
    
    for(i = 0;i<N;i++)
    {
        scanf("%d", &K[i]);
    }
    
    int j = 1;
    int p = 0; //K인덱스
    int answer_idx = 0;
    do
    {
        if(stk.top == 0 || stk.arr[stk.top-1] < K[p]) //push
        {
        stk.arr[stk.top++] = j++;
        answer[answer_idx++] = '+';
        //puts("+\n");
        //stk.top++;
        //j++;
        }
        else if(stk.arr[stk.top-1] == K[p]) //pop
        {
            stk.top--;
            p++;
            answer[answer_idx++] = '-';
            //puts("-\n");
//            if(p == N-1)
//            {
//                if(K[p] > stk.arr[stk.top-1])
//                {
//                    printf("NO\n");
//                    exit(0);
//                }
//                answer[answer_idx++] = '-';
//                //puts("-\n");
//                break;
//            }
        }
        
        else //NO
        {
            printf("NO\n");
            exit(0);
        }
        
    }while(answer_idx != N*2);
    
    for(i = 0;i<answer_idx;i++)
    {
        printf("%c\n",answer[i]);
    }
    return 0;
}
