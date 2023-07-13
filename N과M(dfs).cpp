#include<bits/stdc++.h>
using namespace std;

//const int MAX = 9;
//
//int n,m;
//int arr[MAX];
//bool visited[MAX];

//N과M(1) dfs(0)
//void dfs(int depth){
//  if(depth == m){
//    for(int i = 0; i < m; i++){
//      cout << arr[i] << " ";
//    }
//    cout<<"\n";
//    return;
//  }
//  for(int i= 1; i <= n; i ++){
//    if(!visited[i]){
//      visited[i] = true;
//      arr[depth] = i;
//      dfs(depth+1);
//      visited[i] = false;
//    }
//  }
//}

//N과M(2) dfs(1,0) -> 오름차순으로
//void dfs(int num, int depth){
//    if(depth == m){
//        for(int i = 0;i<m;i++){
//            cout << arr[i] << " ";
//        }
//        cout << "\n";
//        return;
//    }
//    for(int i = num;i<=n;i++){
//        if(!visited[i]){
//            visited[i] = true;
//            arr[depth] = i;
//            dfs(i+1,depth + 1);
//            visited[i] = false;
//        }
//    }
//}

//N과M(3) dfs(0)
//void dfs(int depth){
//    if(depth == m){
//        for(int i = 0;i<m;i++){
//            cout << arr[i] << " ";
//        }
//        cout << "\n";
//        return;
//    }
//
//    for(int i = 1;i<=n;i++){
//        if(1){
//            //visited[i] = true;
//            arr[depth] = i;
//            dfs(depth + 1);
//            //visited[i] = false;
//        }
//    }
//}

//N과M(5)
//const int MAX = 9;
//
//int n,m;
//int arr[MAX];
//bool visited[MAX];
//int copyArr[MAX];
//
//void dfs(int depth){
//    if(depth == m){
//        for(int i = 0;i<m;i++){
//            cout << copyArr[i] << " ";
//        }
//        cout << "\n";
//        return;
//    }
//    for(int i = 0;i<n;i++){
//        if(!visited[i]){
//            visited[i] = true;
//            copyArr[depth] = arr[i];
//            dfs(depth + 1);
//            visited[i] = false;
//        }
//    }
//
//}

//
//int main(){
//    cin>>n>>m;
//
//    for(int i = 0;i<n;i++){
//        cin >> arr[i];
//    }
//    sort(&arr[0], &arr[0] + n);
//
//    dfs(0);
//    //dfs(0);
//    //dfs(1,0);
//    //dfs(0);
//}

////N과M(7)
//void dfs(int idx, int depth){
//    if(depth == m){
//        for(int i = 0;i<m;i++){
//            cout << copyArr[i] << " ";
//        }
//        cout << "\n";
//        return;
//    }
//
//    for(int i = idx;i<n;i++){
//            copyArr[depth] = arr[i];
//            dfs(idx,depth + 1);
//    }
//
//}

////N과M(6) (오름차순 nCm), (8)
//
//const int MAX = 9;
//int n,m;
//int visited[MAX];
//int arr[MAX];
//int copyArr[MAX];
//
//void dfs(int idx, int depth){
//    if(depth == m){
//        for(int i = 0;i<m;i++){
//            cout << copyArr[i] << " ";
//        }
//        cout << "\n";
//        return;
//    }
//    for(int i = idx;i<n;i++){
//        if(!visited[i]){
//            //visited[i] = true; //visited 2개를 주석처리하냐 안하냐에 (6)과 (8)이 갈림
//            copyArr[depth] = arr[i];
//            dfs(i, depth + 1);
//            //visited[i] = false;
//        }
//        //visited[i] = true;
//    }
//}

//int main(){
//    cin>>n>>m;
//
//    for(int i = 0;i<n;i++){
//        cin >> arr[i];
//    }
//    sort(&arr[0], &arr[0] + n);
//
//    dfs(0,0);
//    
//}

//N과 M(9)

//const int MAX = 8;
//int n,m;
//int visited[MAX];
//int arr[MAX];
//int copyArr[MAX];

//void dfs(int idx, int depth){
//    if(depth == m){
//        for(int i = 0;i<m;i++){
//            cout << copyArr[i] << " ";
//        }
//        cout << "\n";
//        return;
//    }
//    int prev = -1; // 이전에 선택한 인덱스 이후의 수만 선택하게끔한다
//    for(int i = 0;i<n;i++){
//        if(!visited[i] && prev != arr[i]){ //핵심 로직(방문안했고, 선택한 인덱스 이후의 숫자면?)
//            visited[i] = true;
//            copyArr[depth] = arr[i];
//            prev = arr[i];
//            dfs(i+1, depth + 1);
//            visited[i] = false;
//        }
//    }
//}

//N과 M(10) 맞는 로직인데 틀린거

//const int MAX = 9;
//int n,m;
//int arr[MAX];
//int copyArr[MAX];
//
//void dfs(int idx, int depth){
//    if(depth == m){
//        for(int i = 0;i<m;i++)
//            cout << copyArr[i] << " ";
//        cout << "\n";
//        return;
//    }else{
//        int prev = -1;
//        for(int i = idx;i<n;i++){
//            if(prev != arr[i]){
//                copyArr[idx] = arr[i];
//                prev = arr[i];
//                dfs(i + 1, depth + 1);
//            }
//        }
//    }
//}
//
//int main(){
//    cin>>n>>m;
//    for(int i = 0;i<n;i++)
//        cin >> arr[i];
//    sort(arr, arr + n);
//    dfs(0,0);
//
//    return 0;
//}

//N과 M(10) 배낀거
//#define max 9
//
//int N, M;
//int arr[max];
//bool visitied[max];
//vector<int>v;
//
//void dfs(int num, int start) {
//    if (start == M) {
//        for (int i = 0; i < M; i++) {
//            cout << arr[i] << ' ';
//        }
//        cout << "\n";
//    }
//    else {
//        int check = -1;
//        for (int i = num; i <= N; i++) {
//            if (!visitied[i] && v[i - 1] != check) {
//                visitied[i] = true;
//                check = v[i - 1];
//                arr[start] = v[i - 1];
//                dfs(i, start+1);
//                visitied[i] = false;
//            }
//        }
//    }
//}
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
//
//    cin >> N >> M;
//
//    for (int i = 0; i < N; i++) {
//        int num; cin >> num;
//        v.push_back(num);
//    }
//    sort(v.begin(), v.end());
//    dfs(1, 0);
//}

////N과 M(11)
//const int MAX = 9;
//int n,m;
//int arr[MAX];
//int copyArr[MAX];
//
//void dfs(int idx, int depth){
//    if(depth == m)
//    {
//        for(int i = 0;i<m;i++)
//            cout << copyArr[i] << " ";
//        cout << "\n";
//        return;
//    }
//        int prev = -1;
//        for(int i = idx;i<n;i++){
//            if(prev != arr[i]){
//                copyArr[depth] = arr[i];
//                prev = arr[i];
//                 dfs(i, depth+1);
//            }
//        }
//}
//
//int main(){
//    cin>>n>>m;
//    for(int i = 0;i<n;i++){
//        cin >> arr[i];
//    }
//    sort(arr, arr + n);
//
//    dfs(0,0);
//
//    return 0;
//}
