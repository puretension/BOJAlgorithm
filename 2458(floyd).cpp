#include<bits/stdc++.h>
using namespace std;

int N,M;
int d[501][501];
int INF = 1e9;



int main(){
    cin >> N >> M;
    for(int i = 0;i<M;i++){
        int a,b;
        cin >> a >> b; // a < b
        d[a][b] = 1;
    }
    
    for(int i = 1;i<=N;i++){
        for(int j = 1;j<=N;j++){
            if(d[i][j] != 1){
                d[i][j] = INF;
            }
        }
    }
    
    //floyd
    for(int k = 1;k<=N;k++){
        for(int i = 1;i<=N;i++){
            for(int j = 1;j<=N;j++){
                if(d[i][k] + d[k][j] < d[i][j])
                    d[i][j] = d[i][k] + d[k][j];
            }
        }
    }

    int ans = 0;
    //6명이라면 5가 cnt되게끔 (a<a1<a2<a3<a4<a5)
    for(int i = 1;i<=N;i++){
        int cnt = 0;
        for(int j = 1;j<=N;j++){
            if(d[i][j] != INF || d[j][i] != INF) cnt++;
        }
        if(cnt == N-1) ++ans;
    }
    
    cout << ans << "\n";
    
    return 0;
}
