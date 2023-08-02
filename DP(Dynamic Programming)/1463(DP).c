#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable: 4996)

int cnt[1000000];

int compare(int a, int b)
{
    int result;
    if(a<=b)
        result = a;
    else result =b;
    return result;
}

int main()
{
    int num;
    scanf("%d", &num);
    cnt[1] = 0;

    for (int i = 2; i <= num; i++)
    {
        cnt[i] = cnt[i - 1] + 1;
        if (i % 2 == 0)
            cnt[i] = compare(cnt[i], cnt[i / 2] + 1);
        if (i % 3 == 0)
            cnt[i] = compare(cnt[i], cnt[i / 3] + 1);
    }

    printf("%d\n", cnt[num]);
    return 0;
}
