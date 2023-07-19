#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#pragma warning(disable: 4996)

int main()
{
    char str[101];
    scanf("%s", str);
    int len = strlen(str);
    int i;
    int count = 0;
    
    
    
    for(i = 0; i< len;i++)
    {
    if((str[i] >= 96 && str[i] <= 122) || str[i] == '-' || str[i] == '=')
        count++;
    }
    for(i = 0; i< len;i++)
    {
        if(str[i] == 'c')
        {
            if(str[i+1] == '=' || str[i+1] == '-')
                count--;
        }
        if(str[i] == 'd')
        {
            if(str[i+1] == '-' || (str[i+1] == 'z'&&str[i+2] == '='))
                count--;
        }
        if(str[i] == 'j')
        {
            if(str[i-1] == 'l' || str[i-1] == 'n')
            {
                count--;
            }
        }
        if(str[i] == 's' || str[i] == 'z')
        {
        if(str[i+1] == '=')
            count--;
        }
    }
    printf("%d", count);
    return 0;
}
