#include<bits/stdc++.h>
using namespace std;

int N,M;

const int dy[] = {-1,0,1,0};
const int dx[] = {0,1,0,-1};

int a[9][9];
int visited[9][9];

vector<pair<int,int>>w, v;

void dfs(int y, int x){
    for(int i = 0;i<4;i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny<0 || nx <0 || ny >= N || nx >= M) continue;
        if(visited[ny][nx]) continue;
        if(a[ny][nx] == 1) continue;
        visited[ny][nx] = 1;
        dfs(ny,nx);
    }
}

int go(){
    memset(visited,0,sizeof(visited));
    for(auto k: v){
        visited[k.first][k.second] = 1;
        dfs(k.first,k.second);
    }
    int cnt = 0;
    for(int i = 0;i<N;i++){
        for(int j = 0;j<M;j++){
            if(a[i][j] == 0 && visited[i][j] == 0) ++cnt;
        }
    }
    return cnt;
}

int main(){
    cin >> N >> M;
    for(int i = 0;i<N;i++){
        for(int j = 0;j<M;j++){
            cin >> a[i][j];
            if(a[i][j] == 0) w.push_back({i,j});
            if(a[i][j] == 2) v.push_back({i,j});
        }
    }
    int res = 0;
    for(int i = 0;i<w.size();i++){
        for(int j = 0;j<i;j++){
            for(int k = 0;k<j;k++){
                a[w[i].first][w[i].second] = 1;
                a[w[j].first][w[j].second] = 1;
                a[w[k].first][w[k].second] = 1;
                res = max(res,go());
                a[w[i].first][w[i].second] = 0;
                a[w[j].first][w[j].second] = 0;
                a[w[k].first][w[k].second] = 0;
            }
        }
    }
    
    cout << res;
    
    return 0;
}
