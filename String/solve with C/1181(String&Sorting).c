#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#pragma warning(disable: 4996)

typedef struct
{
    char arr[51];
    int len;
}word;

int compare(const void * a, const void *b)
{
    word q = *(word*)a;
    word s = *(word*)b;
    if(q.len > s.len) return 1;
    else if(q.len < s.len) return -1;
    return strcmp(q.arr,s.arr); //if(strcmp(q.arr,s.arr) != 0)
}


int main()
{
    int N;
    scanf("%d", &N);
    word w[N];
    
    for(int i = 0;i< N;i++)
    {
        scanf("%s", w[i].arr);
        w[i].len = strlen(w[i].arr);
    }
    qsort(w,N,sizeof(word),compare);
    //puts(w[0].arr);
    for(int i = 0;i< N;i++)
    {
        if(strcmp(w[i].arr, w[i+1].arr) != 0) 
            puts(w[i].arr);
    }
        
    return 0;
}
