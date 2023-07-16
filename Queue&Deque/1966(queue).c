#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable: 4996)


int main()
{
    int T, N, M, max;
    int i, j,k;
    scanf("%d", &T);

    int arr[100] = {0};


    for (i = 0; i < T; i++)
    {
        scanf("%d%d", &N, &M);
        int answer = 1;
        int front = 0;
        int max = 0;
        for (j = 0; j < N; j++)
            scanf("%d", &arr[j]);

        while (1)
        {
            for (k = 0; k < N; k++)
            {
                if (arr[k] > max)
                    max = arr[k];
            }
            //최댓값 찾고
            while (arr[front] != max)
                front = (front + 1) % N;
         //front가 capacity넘기면 초기화
            if (front == M)
                break;

            arr[front] = 0;
            front = (front + 1) % N;
            max = 0;
            answer++;
        }
        printf("%d\n", answer);
    }
    return 0;
}
