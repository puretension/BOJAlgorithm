#include<bits/stdc++.h>
using namespace std;

int a[51][14];
int visited[51][14];

int N, M;

int cnt;

int res = 0;


const int dy[] = {-1,0,1,0};
const int dx[] = {0,1,0,-1};

vector<pair<int, int>>c;
vector<pair<int, int>>h;


int dfs(int y, int x){
   if(a[y][x] == 2){
       return cnt;
   }
   for(int i = 0;i<4;i++){
       int ny = y + dy[i];
       int nx = x + dx[i];
       if(ny < 0 || nx < 0 || ny >= N || nx >= M) continue;
       if(visited[ny][nx]) continue;
       visited[ny][nx] = 1;
       cnt++;
       dfs(ny,nx);
   }
   return cnt;
}

void go(){
   int res1 = 0;
   for(pair<int, int> d: h){
       memset(visited, 0, sizeof(visited));
       visited[d.first][d.second] = 1;
       res1 = min(res1,dfs(d.first, d.second));
   }


}

int main(){
   cin >> N >> M;
   for(int i = 0;i<N;i++){
       for(int j = 0;j<M;j++){
           cin >> a[i][j];
           if(a[i][j] == 1) h.push_back({i,j});
           if(a[i][j] == 2) c.push_back({i,j});
       }
   }



   return 0;
}
