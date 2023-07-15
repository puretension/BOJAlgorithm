//#include <bits/stdc++.h>
//using namespace std;
//
////가중치가 0인 간선이 있으므로
////모든 가중치가 동일한 BFS만으로는 풀기어렵다
//
//const int MAX = 100000;
//
//int result = 1e9;
//
//int n, k;
////bool visited[MAX+1]; //1697문제와 달리 최단거리를 저장해야함
//int visited[MAX + 1];
//
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
//        if(2*x >= 0 && 2*x <= MAX){
//            if(!visited[2*x]){
//                visited[2*x] = true;
//                q.push({2*x,cnt});
//            }
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
//
////void dijkstra(int start){
////    for(int i = 1;i<=N;i++){
////        d[i] = INF;
////    }
////    d[start] = 0;
////    priority_queue<pair<int,int>> pq;
////    pq.push(make_pair(start, 0));
////
////    while(pq.size()){
////        int cur = pq.top().first;
////        int distance = -pq.top().second;
////        pq.pop();
////        if(d[cur] < distance) continue;
////        for(int i = 0;i<a[cur].size();i++){
////            int next = a[cur][i].first;
////            int nextDistance = distance + a[cur][i].second;
////            if(d[next] > nextDistance){
////                d[next] = nextDistance;
////                pq.push(make_pair(next, -nextDistance));
////            }
////        }
////    }
////}
////
