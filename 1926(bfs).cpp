//#include<bits/stdc++.h>
//using namespace std;
//
//int N,M;
//
//int a[501][501];
//int v[501][501];
//
//const int dy[] = {-1,0,1,0};
//const int dx[] = {0,1,0,-1};
//
//int cnt = 0;
//int width = 0;
//int maxWidth = 0;
//
//void bfs(int y, int x){
//    queue<pair<int, int>> q;
//    q.push({y,x});
//    v[y][x] = 1;
//    while(!q.empty()){
//        tie(y,x) = q.front(); q.pop();
//        for(int i = 0;i<4;i++){
//            int ny = y + dy[i];
//            int nx = x + dx[i];
//            if(ny < 0 || nx < 0 || ny >= N || nx >= M) continue;
//            if(v[ny][nx]) continue;
//            if(!a[ny][nx]) continue;
//            width++;
//            v[ny][nx] = 1;
//            q.push({ny,nx});
//        }
//    }
//}
//
//int main(){
//    cin >> N >> M;
//    for(int i = 0;i<N;i++){
//        for(int j = 0;j<M;j++){
//            cin >> a[i][j];
//        }
//    }
//
//    for(int i = 0;i<N;i++){
//        for(int j = 0;j<M;j++){
//            if(a[i][j] && !v[i][j]) {
//                width = 1;
//                bfs(i,j);
//                if(maxWidth < width) maxWidth = width;
//                cnt++;
//            }
//        }
//    }
//    if(cnt == 0){
//        maxWidth = 0;
//    }
//    cout << cnt << "\n" << maxWidth << "\n";
//
//    return 0;
//}
//
