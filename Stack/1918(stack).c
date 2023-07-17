#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define MAX_SIZE 100

typedef struct Stack{
    int top;
    char str[MAX_SIZE];
}Stack;

//일반적인 스택 함수
int IsEmpty(Stack * pstack);
void Push(Stack * pstack, char data);
char Pop(Stack * pstack);
char IsPeek(Stack*pstack);


int GetOpPrec(char op); //연산자 우선순위 정보 반환함수
int WhoPrecOp(char op1, char op2); //두 연산자중 우선순위 결정함수
void ConvToRPNExp(char exp[]); //중위 표기 -> 후위표기 변환 함수


int IsEmpty(Stack * pstack){
    if(pstack -> top == -1) return 1;
    return 0;
}

char IsPeek(Stack*pstack){
    return pstack->str[pstack->top];
}

void Push(Stack * pstack, char data){
    (pstack -> top)++;
    pstack -> str[pstack -> top] = data;
}

char Pop(Stack * pstack){
    char returnData = pstack->str[pstack->top];
    (pstack->top)--;
    return returnData;
}

int GetOpPrec(char op){
    switch(op){
        case '*':  case '/':
            return 4;
        case '+': case '-':
            return 2;
        case'(': case ')':
            return 1;
    }
    return -1;
}

int WhoPrecOp(char op1, char op2){
    int op1Prec = GetOpPrec(op1);
    int op2Prec = GetOpPrec(op2);
    
    if(op1Prec > op2Prec) return 1;
    else if(op1Prec < op2Prec) return -1;
    return 0;
}

void ConvToRPNExp(char exp[]){
    Stack stack;
    stack.top = -1;
    
    for(int i = 0;i<strlen(exp);i++){
        if(isupper(exp[i])) {
            printf("%c", exp[i]); //문자는 여기서 처리
        }
        //연산자 처리
        else {
            switch(exp[i])
            {
                case '(':Push(&stack, exp[i]);
                        break;
                case ')':
                    //문제 핵심코드1. 괄호 사이에 연산자들 모두 POP
                    while(IsPeek(&stack) != '(') printf("%c", Pop(&stack));
                    Pop(&stack); // ( 잇던거를 pop시켜야함ㅇㅇ
                    break;
                case '+': case '-':
                case '*': case '/':
                    //문제 핵심코드2. 현재 연산자 exp[i]와 top에 잇는 연산자 비교후 top의 연산자가 더 높다면 pop(애초에 현재 연산자가 높다면 while문은 실행 X)
                    while(!IsEmpty(&stack) && WhoPrecOp(IsPeek(&stack), exp[i]) >= 0)
                        printf("%c", Pop(&stack));
                        Push(&stack, exp[i]); //현재 연산자를 Push
            }
        }
    }
    while(!IsEmpty(&stack)) printf("%c", Pop(&stack));
}


int main(){
    char str[100];
    scanf("%s", str);
    ConvToRPNExp(str);
    return 0;
}

