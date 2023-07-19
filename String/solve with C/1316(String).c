#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable: 4996)

int check(char str[101], int len)
{
    int i, j;
    int H = 0;
    for (i = 0; i < len; i++)
    {
        for (j = 0; j < len; j++)
        {
            if (str[i] == str[j])
            {
                H = j - i;
                if (H > 1)
                {
                    if (str[j - 1] != str[j])
                    {
                        return 0;
                    }
                }
            }
        }
    }
    return 1;
}
int main()
{
    int N;
    int i, j;
    char str[101];
    int p, k;
    int cnt = 0;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%s", str);
        cnt += check(str, strlen(str));
    }
    printf("%d", cnt);

    return 0;
}
