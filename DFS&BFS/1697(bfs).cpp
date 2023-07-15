//#include <bits/stdc++.h>
//using namespace std;
//
//const int MAX = 100000;
//
//int n, k;
//bool visited[MAX+1];
//void bfs(int a){
//    queue<pair<int,int>>q;
//    q.push({a,0});
//    while(!q.empty()){
//        int x = q.front().first;
//        int cnt = q.front().second;
//        q.pop();
//        if(x == k){
//            cout << cnt << "\n";
//            break;
//        }
//        if(x+1 >= 0 && x+1 <= MAX){
//            if(!visited[x+1]){
//                visited[x+1] = true;
//                q.push({x+1,cnt + 1});
//            }
//        }
//        if(x-1 >= 0 && x-1 <= MAX){
//            if(!visited[x-1]){
//                visited[x-1] = true;
//                q.push({x-1,cnt + 1});
//            }
//        }
//        if(2*x >= 0 && 2*x <= MAX){
//            if(!visited[2*x]){
//                visited[2*x] = true;
//                q.push({2*x,cnt + 1});
//            }
//        }
//    }
//}
//
//int main(){
//    cin >> n >> k;
//    visited[n] = true;
//    bfs(n);
//    return 0;
//}
//
