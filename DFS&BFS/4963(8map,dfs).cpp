#include<bits/stdc++.h>
using namespace std;

int cnt = 0;

const int dy[] = {-1,-1,0,1,1,1,0,-1};
const int dx[] = {0,1,1,1,0,-1,-1,-1};

int a[51][51];
bool visited[51][51];

int h,w;

void dfs(int y, int x){
   visited[y][x] = true;
   for(int i = 0;i<8;i++){
       int ny = y + dy[i];
       int nx = x + dx[i];
       if(ny < 0 || nx < 0 || ny >h || nx > w) continue; //(실수)1부터 h이하, 1부터 w이하까지 받았으니까.
       if(visited[ny][nx]) continue;
       if(!a[ny][nx]) continue;
       dfs(ny,nx);
   }
   return;
}
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   while(1){
       cin >> w >> h;
       if(w == 0 && h == 0){
           break;
           //return 0;
       }
       else{
           memset(a, 0, sizeof(a));
           memset(visited, false, sizeof(visited));
           cnt = 0;
           for(int i = 1;i<=h;i++){
               for(int j = 1;j<=w;j++){
                   cin >> a[i][j];
               }
           }
           for(int i = 1;i<=h;i++){
               for(int j = 1;j<=w;j++){
                   if(a[i][j] == 1 && !visited[i][j]){
                       dfs(i,j);
                       cnt++;
                   }
               }
           }
           cout << cnt << "\n";
       }
   }
   return 0;
}
