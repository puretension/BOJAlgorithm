#include<bits/stdc++.h>
using namespace std;

int cnt = 0;

int main(){
    int T;
    cin >> T;
    int n;
    int dp[12] = {0,};
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    while(T--){
        cin >> n;
        for(int i = 4;i<=n;i++){
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        }
        cout << dp[n] << "\n";
    }
    
    return 0;
}
