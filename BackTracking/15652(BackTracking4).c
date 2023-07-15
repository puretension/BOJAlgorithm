#include<stdio.h>

int N,M;
int visited[1000] = {0,};
int result[1000] = {0,};


void recur(int start, int num)
{

    if(start == M)
    {
            for(int i = 0;i<M;i++)
                printf("%d ",result[i]);
            puts("");
    }

    else
    {
        for(int i = 1;i<=N;i++)
        {
            if(visited[i] == 0 && i >= num)
            {
            result[start] = i;
            visited[i] = 1;
            if(i == result[start]) //중복허용
                visited[i] = 0; //다시 방문X로 취급
            recur(start + 1,i);
            visited[i] = 0;
            }

        }
    }
}

int main()
{
    scanf("%d %d", &N, &M);
    recur(0,0);

    return 0;
}

