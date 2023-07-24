#include <stdio.h>

//자리수를 출력하는 프로그램이므로 ans를 자리수로 만들고 모듈러 공식 적용
int main(){
    int n;
    int ans;
    while (EOF != scanf("%d", &n))
    {
        int dNum = (1 % n);
        ans = 1; //최소 자리수 1
        while(1)
        {
            if(dNum != 0)
            {
                dNum = dNum * 10 + 1; //(something * 10) + 1 반복
                dNum %= n;
                ans++; //1 자리수가 증가
            }
            else if(dNum == 0) //n으로 나누어 떨어진다면?
            {
                printf("%d\n",ans);
                break;
            }
        }
    }
    
    return 0;
}
