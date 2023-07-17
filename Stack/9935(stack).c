#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char str[1000001];
char bomb[37];

int top = -1;

int main(void) {
    scanf("%s", str);
    scanf("%s", bomb);

    int strLen = strlen(str);
    int bombLen = strlen(bomb);
    
    for (int i = 0; i < strLen; i++) {
        str[++top] = str[i]; //push
        //push함과 동시에 계속해서 bomb문자열인지 check
        if (str[top] == bomb[bombLen - 1] && top >= bombLen - 1) {
            int flag = 0;
            for (int j = 0; j < bombLen; j++) {
                //1글자라도 폭발문자열과 다르다면 break
                if (str[top - j] != bomb[bombLen - j - 1]) {
                    flag = 1;
                    break;
                }
            }
            if (!flag)  top -= bombLen; //폭발문자열과 동일하다면 그만큼 pop
        }
    }
    
    if (top == -1)
        printf("FRULA");
    else
        for (int i = 0; i <= top; i++)
            printf("%c", str[i]);
    return 0;
}
