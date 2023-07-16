#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable: 4996)

int main()
{
    int* arr;
    int N, K;
    int i;
    int front, rear, count;
    scanf("%d%d", &N, &K);
    arr = (int*)malloc(sizeof(int) * N);

    front = K - 1;

    count = N;
    for (i = 0; i < N; i++)
    {
        arr[i] = i + 1;
    }
    printf("<");
    while (1)
    {
        front = (front) % N;
        printf("%d", arr[front]);
        
        count--;
        if(count != 0)
        {
            printf(", ");
        }
        if (count == 0)
        {
            printf(">");
            exit(0);
        }
        arr[front] = -99999;
    
        front = (front) % N;
        for (i = 0; i <= K - 1; i++)
        {
            front++;
            front = (front) % N;
            while(arr[front] == -99999)
            {
                front++;
                front = (front) % N;
            }
            front = (front) % N;
        }
        front = (front) % N;
    }
    

    return 0;
}
