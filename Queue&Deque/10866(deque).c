#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable: 4996)

#define FALSE -1; //덱에 정수 X경우

typedef struct queue
{
    int arr[10001];
    int front;
    int rear;
    int count;
    int capacity;
}queue;


void init(queue*p)
{
    p->front = p->rear = p->count =0;
    //p->capacity = 1;
}

void push_front(queue*p, int data) //가장앞에 넣는다. rear값이동 익숙
{
//    p->capacity++;
//    p->arr[p->rear] = data; //가장 앞에있는 수 넣기에 0부터 넣어준후 rear플러스
//    p->rear++;
//    p->rear = ((p->rear+p->capacity) % p->capacity);
//    p->count++;
    for(int i = p->rear; i>=0;i--)
    {
        p->arr[i+1] = p->arr[i];
    }
    p->arr[0] = data;
    p->rear++;
    p->count++;
}

void push_back(queue*p, int data) //가장 뒤에 넣는다. front값이동 익숙
{
//    p->capacity++;
//    p->front--; //가장 뒤에 수를 넣기에 rear와 간격1을 위해 front-=1후 넣어줌
//    p->front = ((p->front + p->capacity) % p->capacity);
//    p->arr[p->front] = data;
    p->arr[p->rear] = data;
    p->rear++;
    p->count++;
}

void pop_front(queue*p) //가장 앞의 수를 뺀다 rear값이동
{
    if(p->count <=0)
        printf("-1\n");
    else{
    printf("%d\n",p->arr[0]);
    for(int i = 0;i<p->rear;i++)
    {
        p->arr[i] = p->arr[i+1];
    }
    p->arr[p->rear] = 0;
    p->rear--;
    p->count--;
    }
}

void pop_back(queue*p) //가장뒤의 수를 뺀다 front값이동
{
    if(p->count <=0)
        printf("-1\n");
    else{
        printf("%d\n", p->arr[p->rear-1]);
        p->arr[p->rear -1] = 0;
        p->rear--;
        p->count--;
//    int number;
//    number = p->arr[p->front];
//    p->front++;
//    p->front = ((p->front + p->capacity) % p->capacity);
//    p->capacity--;
//    p->count--;
//    return number;
    }
}


int main()
{

    queue que;
    int N;
    char select[20];
    int data;

    scanf("%d", &N);

    init(&que);
    for(int i = 0;i < N;i++)
    {
        scanf("%s", select);
        //while(getchar() != '\n');

        if(strcmp(select, "push_front") == 0)
        {
            scanf("%d",&data);
            push_front(&que, data);
        }

        else if(strcmp(select, "push_back") == 0)
        {
            scanf("%d", &data);
            push_back(&que,data);
        }

        else if(strcmp(select, "pop_front") == 0)
        {
            pop_front(&que);
        }
        else if(strcmp(select, "pop_back") == 0)
        {
            pop_back(&que);
        }

        else if(strcmp(select,"size") == 0)
        {
            printf("%d\n", que.count);
        }

        else if(strcmp(select,"empty") == 0)
        {
        if(que.count < 1)
            printf("1\n");
        else
            printf("0\n");
        }

        else if(strcmp(select,"front") == 0)
        {
            if(que.count > 0)
            {
                printf("%d\n", que.arr[0]); //0이 아닌 front와 rear값의 증감은 애초에 말이안된다 첫 끝값이 지정 X
            }
            else
                printf("-1\n");
        }

        else if(strcmp(select,"back") == 0)
        {
            if(que.count > 0)
                printf("%d\n", que.arr[que.rear-1]);
            else
                printf("-1\n");
        }
    }
    return 0;
}
