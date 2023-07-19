#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#pragma warning(disable: 4996)



int main()
{
    char num[5];
    
   while(1)
    {
        int cnt = 0;
        scanf("%s", num);
        
        if(num[0] == '0')
            exit(0);
        int key = strlen(num)/2; //절반만 비교를 위한 배열길이
    
        for(int i = 0;i< key;i++)
        {
            if(num[i]==num[strlen(num)-i-1])
            {
                cnt++;
            }
        }
        if(cnt == key)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
