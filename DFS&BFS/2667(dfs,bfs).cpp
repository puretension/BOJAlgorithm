//#include<bits/stdc++.h>
//using namespace std;
//
//int cnt = 0;
//
//const int dy[] = {-1,0,1,0};
//const int dx[] = {0,1,0,-1};
//
//int a[26][26];
//bool visited[26][26];
//
//vector<int>arr;
//int N;
//
//int dfs(int y, int x){
//    visited[y][x] = true;
//    int ret = 1;
//    for(int i = 0;i<4;i++){
//        int ny = y + dy[i];
//        int nx = x + dx[i];
//        if(ny < 0 || nx < 0 || ny >=N || nx >=N) continue; //(실수)1부터 h이하, 1부터 w이하까지 받았으니까.
//        if(visited[ny][nx]) continue;
//        if(!a[ny][nx]) continue;
//        ret+= dfs(ny, nx);
//    }
//    return ret;
//}
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    cin >> N;
//    for(int i = 0;i<N;i++){
//        string input;
//        cin >> input;
//        for(int j = 0;j<N;j++){
//            a[i][j] = input[j] - '0';
//        }
//    }
//    memset(visited, false, sizeof(visited));
//    for(int i = 0;i<N;i++){
//        for(int j = 0;j<N;j++){
//            if(a[i][j] == 1 && !visited[i][j]){
//                cnt++;
//                int num = dfs(i,j);
//                arr.push_back(num);
//            }
//        }
//    }
//    sort(arr.begin(), arr.end());
//    cout << cnt << "\n";
//    for(int x: arr){
//        cout << x << "\n";
//    }
//    return 0;
//}
