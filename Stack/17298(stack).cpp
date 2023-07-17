#include <stdio.h>
#include <stdlib.h>

#define MAXLEN 1000001

int N;
int stk[MAXLEN]; //스택거쳐서


int top = -1;

void push(int data) {
    stk[++top] = data;
}

int pop() {
    return stk[top--];
}

int is_empty() {
    return top == -1;
}

int main() {
    scanf("%d", &N);
    int * arr = (int*)malloc(sizeof(int) * (N+1));
    int * ans = (int*)malloc(sizeof(int) * (N+1));
    for (int i = 1; i <= N; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 1; i <= N; i++) {
        while (!is_empty() && arr[stk[top]] < arr[i]) {
            ans[pop()] = arr[i];
        }
        push(i);
    }

    while (!is_empty()) {
           ans[pop()] = -1;
       }


    for (int i = 1; i <= N; i++) {
        printf("%d ", ans[i]);
    }
    printf("\n");
    
    free(arr);

    return 0;
}
