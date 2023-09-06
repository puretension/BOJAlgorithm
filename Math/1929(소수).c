#include <stdio.h>
#include<stdlib.h>
#pragma warning (disable : 4996)

void primeNum(int a,int b, int * arr)
{
    arr[0] = 1;
    arr[1] = 1;
    int i,j;
    for(i = 2;i<b+1;i++) //2,3은 소수니 제외, 4부터~
    {
        for(j = 2*i;j<b+1;j+=i) //2,4,6,  6,9,  4,8
        {
            if(arr[j] == 0)
                arr[j] = 1;
        }
    }
    for(int i = a;i<b+1;i++)
    {
        if(arr[i] == 0)
            printf("%d\n", i);
    }
    
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int arr[1000001] = {0};
    primeNum(a,b,arr);
    
    
    
    return 0;
}
