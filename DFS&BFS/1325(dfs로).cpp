#include<bits/stdc++.h>
using namespace std;

//잘못된 헤메엇던 풀이
//const int MAX = 10001;
//
//int visited[MAX];
//vector<int> a[MAX];
//
//vector<int>ans;
//
//int dfs(int x, int cnt){
//    if(visited[x]) {
//        cout << x << "\n";
//        return cnt;
//    }
//    visited[x] = 1;
//    for(int i = 0;i<a[x].size();i++){
//        int y = a[x][i];
//        cnt++;
//        dfs(y,cnt);
//    }
//    return cnt;
//}
//
//void dfs2(int x){
//    if(visited[x]) {
//        cout << x << " ";
//        return;
//    }
//    visited[x] = 1;
//    for(int i = 0;i<a[x].size();i++){
//        int y = a[x][i];
//        cout << y << " ";
//        dfs2(y);
//    }
//    return;
//}
//
//int maxNum = 0;
//int maxIdx = 0;
//
//int main(){
//    int N,M;
//    cin >> N >> M;
//    for(int i = 0;i<M;i++){
//        int u,v;
//        cin >> u >> v;
//        a[u].push_back(v);
//    }
//
//    for(int i = 1;i<=N;i++){
//        int cnt = dfs(i,0);
//        if(maxNum < cnt){
//            maxNum = cnt;
//            maxIdx = i;
//        }
//    }
//
//    cout << "@@" <<  maxIdx << "\n";
//
//    dfs2(maxIdx);
//
//    return 0;
//}
//

//const int MAX = 10001;
//
//vector<int> a[MAX];
//bool visited[MAX];
//vector<int> result;
//int maxNum = 0;
//
//void dfs(int x) {
//    visited[x] = true;
//    for (int i = 0; i < a[x].size(); i++) {
//        int y = a[x][i];
//        if (!visited[y]) {
//            dfs(y);
//        }
//    }
//}
//
//int main() {
//    int N, M;
//    cin >> N >> M;
//
//    for (int i = 0; i < M; i++) {
//        int u, v;
//        cin >> u >> v;
//        a[v].push_back(u);  // 반대로 저장하여 신뢰하는 관계로 변경
//    }
//
//    //visited를 이용한 메인로직
//    //1만(N) * 10만(M) 2중 for문 1억...-> O(N^2) 정답임.
//    for (int i = 1; i <= N; i++) {
//        fill(visited, visited + MAX, false);
//        dfs(i);
//
//        int cnt = 0;
//        for (int j = 1; j <= N; j++) {
//            if (visited[j]) {
//                cnt++;
//            }
//        }
//
//        if (cnt > maxNum) {
//            maxNum = cnt;
//            result.clear();
//            result.push_back(i);
//        } else if (cnt == maxNum) {
//            result.push_back(i);
//        }
//    }
//
//    sort(result.begin(), result.end());
//
//    for (int i = 0; i < result.size(); i++) {
//        cout << result[i] << " ";
//    }
//    cout << "\n";
//
//    return 0;
//}


//큰돌님 풀이

#include <bits/stdc++.h>
using namespace std;

vector<int> v[10001];
int dp[10001], mx, visited[10001], n, m, a, b;

int dfs(int here) {
   visited[here] = 1;
   int ret = 1;
   for(int there : v[here]){
       if(visited[there]) continue;
       ret += dfs(there);
   }
   return ret;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cin >> n >> m;
   while (m--) {
        cin >> a >> b;
       v[b].push_back(a);
   }
   for (int i = 1; i <= n; i++) {
       memset(visited, 0, sizeof(visited));
       dp[i] = dfs(i);
       mx = max(dp[i], mx);
   }
   for (int i = 1; i <= n; i++)
       if (mx == dp[i])
           cout << i << " ";
   return 0;
}



