#include<bits/stdc++.h>
using namespace std;


int main() {
   int n;
   cin >> n;

   if(n%2 != 0){
       cout << 0;
       return 0;
   }
   
   int dp[31] = {0};
   dp[2] = 3;


   for (int i = 4; i <= n; i++) {
       // 짝수만을 타일로 채울 수 있음!
       if (i % 2 == 0) {
           dp[i] += dp[i - 2] * dp[2];
           
           for (int j = i - 4; j >= 0; j -= 2) {
               dp[i] += dp[j] * 2; // dp[j]에 특수한 모양 2개의 조합
           }

           dp[i] += 2; // 특수한 모양 2개 추가
       }
   }

   cout << dp[n] << endl;
   return 0;
}
