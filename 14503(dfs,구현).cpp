////#include<bits/stdc++.h>
////using namespace std;
////
////int a[51][51];
////int visited[51][51];
////
////int ans = 0;
////
////const int dy[] = {-1,0,1,0};
////const int dx[] = {0,1,0,-1};
////
////int N, M;
////int y,x,dir;
////
////
////void dfs(int cx, int cy, int cd) {
////    if (a[cx][cy] == 0) {
////        a[cx][cy] = 2;
////        ans++;
////    }
////
////    for (int i = 0; i < 4; i++) {
////        int nd = (cd + 3 - i) % 4; //반시계
////        int nx = cx + dx[nd];
////        int ny = cy + dy[nd];
////
////        if (nx < 0 || ny < 0 || nx >= N || ny >= M) {
////            continue;
////        }
////
////        if (a[nx][ny] == 0) {
////            dfs(nx, ny, nd);
////        }
////    }
////
////    int nd = (cd + 2) % 4;
////    int nx = cx + dx[nd];
////    int ny = cy + dy[nd];
////
////    if (a[nx][ny] == 1) {
////        cout << ans;
////        exit(0);
////    }
////    dfs(nx, ny, cd); //바라보는 방향을 유지한채.....
////}
////
////
////
////int main(){
////
////    cin >> N >> M;
////    cin >> y >> x >> dir;
////    for(int i = 0;i<N;i++){
////        for(int j = 0;j<M;j++){
////            cin >> a[i][j];
////        }
////    }
////    dfs(y,x,dir);
////
////    return 0;
////}
//
//
//#include<bits/stdc++.h>
//using namespace std;
//
//int n, m;
//int a[51][51];
//
//int dx[] = { -1, 0, 1, 0 };
//int dy[] = { 0, 1, 0, -1 };
//
//int ans;
//
//void dfs(int cx, int cy, int cd) {
//    if (a[cx][cy] == 0) {
//        a[cx][cy] = 2;
//        ans++;
//    }
//
//    for (int i = 0; i < 4; i++) {
//        int nd = (cd + 3 - i) % 4; //반시계
//        int nx = cx + dx[nd];
//        int ny = cy + dy[nd];
//
//        if (nx < 0 || ny < 0 || nx >= n || ny >= m) {
//            continue;
//        }
//
//        if (a[nx][ny] == 0) {
//            dfs(nx, ny, nd);
//        }
//    }
//
//    int nd = (cd + 2) % 4; //후진
//    int nx = cx + dx[nd];
//    int ny = cy + dy[nd];
//
//    if (a[nx][ny] == 1) {
//        cout << ans;
//        exit(0);
//    }
//    dfs(nx, ny, cd); //바라보는 방향을 유지한채.....
//}
//
//
//int main(void) {
//    cin >> n >> m;
//
//    int r, c, dir;
//    cin >> r >> c >> dir;
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            cin >> a[i][j];
//        }
//    }
//
//    dfs(r, c, dir);
//
//    return 0;
//}
