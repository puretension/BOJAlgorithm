//#include<bits/stdc++.h>
//using namespace std;
//
//const int MAX_VERTEX = 1001;
//const int MAX_EDGE = 100001;
//const int INF = 1e9;
//
//vector<pair<int,int>> a[MAX_EDGE];
//int d[MAX_VERTEX];
//
//void dijkstra(int start){
//    d[start] = 0;
//    priority_queue<pair<int,int>> pq;
//    pq.push(make_pair(start, 0));
//
//    while(pq.size()){
//        int cur = pq.top().first;
//        int distance = pq.top().second;
//        pq.pop();
//        if(d[cur] < distance) continue;
//        for(int i = 0;i<a[cur].size();i++){
//            int next = a[cur][i].first;
//            int nextDistance = distance + a[cur][i].second;
//            if(d[next] > nextDistance){
//                d[next] = nextDistance;
//                pq.push(make_pair(next, nextDistance));
//            }
//        }
//    }
//}
//
//int main(){
//    int N,M;
//    cin >> N >> M;
//    for(int i = 1;i<=N;i++){
//        d[i] = INF;
//    }
//
//    for(int i = 0;i<M;i++){
//        int u,v,c;
//        cin >> u >> v >> c;
//        a[u].push_back(make_pair(v, c));
//    }
//
//    int a,b;
//    cin >> a >> b;
//
//    dijkstra(a);
//
//    cout << d[b] << "\n";
//
//
//}
//
