#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable: 4996)
int num[1000] = {0,};
int cnt[1000] = {0,};

int main()
{
    int A;
    int max;
    scanf("%d", &A);
    for(int i = 0; i<A; i++) //배열값 입력받고
    scanf("%d",&num[i]);
    cnt[0] = 1; //첫 cnt[0]값만 지정
    for(int i = 1; i<A; i++) //후번비교자: [1]부터 [A-1]까지 1~4
    {
        cnt[i] = 1;
        for(int j = 0; j<i; j++) //전번비교자: [0] 부터 [A-2]까지 0~3
        {
            if(num[i]<num[j]) //두값비교 num[1] = 20
            {
             if(cnt[i] > (cnt[j] + 1)) //후번이 cnt 더커?
                 cnt[i] = cnt[i]; //10 20 30 20 50시
                else //전번이 cnt 더 커?
                cnt[i] = (cnt[j] + 1); //if(i == 1) cnt[1] = 2
            }
        }
    }
    max = 0;
    for(int i = 0; i<A; i++)
    {
       if(max < cnt[i])
           max = cnt[i];
    }
    
    printf("%d\n",max);
    
    
    return 0;
}
