#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#pragma warning(disable: 4996)
 

int Fibo(int N)
{
    int a[41];
    a[0] = 0;
    a[1] = 1;
    for(int i = 2;i<=N;i++)
        a[i] = a[i-1] + a[i-2];
    return a[N];
}

int main()
{
    int T;
    int N;

    scanf("%d", &T);
    for(int i = 0;i< T;i++)
    {
        scanf("%d",&N);
        if(N == 0) printf("%d %d\n",1,0);
        else if(N == 1) printf("%d %d\n",0,1);
        else printf("%d %d\n", Fibo(N-1), Fibo(N));
    }
    return 0;
}
