#include<bits/stdc++.h>
using namespace std;

int d[401][401];
int N,K,S;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N >> K;
    for(int i = 0;i<K;i++){
        int a,b;
        cin >> a >> b;
        d[a][b] = -1;
        d[b][a] = 1;
    }
    for(int k = 1;k<=N;k++){
        for(int i = 1;i<=N;i++){
            for(int j = 1;j<=N;j++){
                if((d[i][k] == 1 || d[i][k] == -1) && d[i][k] == d[k][j])
                    d[i][j] = d[i][k];
            }
        }
    }
    cin >> S;
    for(int i = 0;i<S;i++){
        int a,b;
        cin >> a >> b;
        cout << d[a][b] << "\n";
    }
}
