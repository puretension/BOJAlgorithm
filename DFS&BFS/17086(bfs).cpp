#include<bits/stdc++.h>
using namespace std;

const int dy[] = {-1,-1,0,1,1,1,0,-1};
const int dx[] = {0,1,1,1,0,-1,-1,-1};

int a[51][51];

int N,M;

struct s{
   int y,x;
};

queue<s>q;

void bfs(){
   while(!q.empty()){
       int y = q.front().y;
       int x = q.front().x;
       q.pop();
       for(int i = 0;i<8;i++){
           int ny = y + dy[i];
           int nx = x + dx[i];
           if(ny <0 || nx <0 || ny >= N || nx >= M) continue;
           if(!a[ny][nx]){
               a[ny][nx] = a[y][x] + 1;
               q.push({ny,nx});
           }
       }
   }
}

int main(){
   cin >> N >> M;
   for(int i = 0;i<N;i++){
       for(int j = 0;j<M;j++){
           cin >> a[i][j];
           if(a[i][j]) q.push({i,j});
       }
   }
   bfs();
   int ans = 0;
   for(int i = 0;i<N;i++){
       for(int j = 0;j<M;j++){
           if(ans < a[i][j]) ans = a[i][j];
       }
   }
   cout << ans-1 << "\n";
   return 0;
}
