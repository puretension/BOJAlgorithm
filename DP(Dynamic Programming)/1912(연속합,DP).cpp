#include<bits/stdc++.h>
using namespace std;

int N;
int nums[100001];
int dp[100001];
int sum,ret;
int main(){
    cin >> N;
    for(int i = 0;i<N;i++){
        cin >> nums[i];
    }
    
    ret = nums[0];
    dp[0] = nums[0];
    
    for(int i = 1;i<N;i++){
        //(n-1번째까지의 합+ n번째 숫자) vs n번째숫자
        dp[i] = max(dp[i-1] + nums[i], nums[i]);
        ret = max(dp[i],ret);
    }
    
    cout << ret;
    
    return 0;
}
