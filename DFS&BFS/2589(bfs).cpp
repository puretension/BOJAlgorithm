#include<bits/stdc++.h>
using namespace std;

const int dy[] = {-1,0,1,0};
const int dx[] = {0,1,0,-1};

int N,M;

char a[51][51];
int visited[51][51];

int res = 0;

void bfs(int y, int x){
   memset(visited, 0, sizeof(visited));
   queue<pair<char,int>>q;
   visited[y][x] = 1;
   q.push({y,x});
   while(q.size()){
       tie(y,x) = q.front(); q.pop();
       for(int i = 0;i<4;i++){
           int ny = y + dy[i];
           int nx = x + dx[i];
           if(a[ny][nx] != 'L') continue;
           if(ny < 0 || nx < 0 || ny >= N || nx >= M) continue;
           if(visited[ny][nx]) continue;
           visited[ny][nx] = visited[y][x] + 1;
           q.push({ny,nx});
           res = max(res,visited[ny][nx]);
       }
   }
}

int main(){
   cin >> N >> M;
   for(int i = 0;i<N;i++){
       for(int j = 0;j<M;j++)
       {
           cin >> a[i][j];
       }
   }
   for(int i = 0;i<N;i++){
       for(int j = 0;j<M;j++){
           if(a[i][j] == 'L')
               bfs(i,j);
       }
   }

   cout << res -1;
   return 0;
}

