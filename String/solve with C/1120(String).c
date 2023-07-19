#include<stdio.h>
#include<string.h>
#pragma warning(disable :4996)

int main()
{
    char arr1[51];
    char arr2[51];
    scanf("%s%s", arr1, arr2);
    
    int len1 = strlen(arr1);
    int len2 = strlen(arr2);
    
    int i,j;
    int min = len2;
    int cnt;

    for (i = 0; i <= len2 - len1; i++)
    {
        cnt = 0;
        int temp = 0;
        for (j = i; j < i+len1; j++)
        {
            if (arr1[cnt] != arr2[j])
            {
                temp++;
            }
            cnt++;
        }
        if (min > temp)
            min = temp;
    }
    printf("%d", min);

    return 0;
}
