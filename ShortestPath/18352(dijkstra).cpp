#include<bits/stdc++.h>
using namespace std;
int N,M,K,X;
int INF = 1e9;
const int MAX = 300001;

vector<pair<int, int>>a[MAX]; //간선 정보
int d[MAX]; //비용
bool visited[MAX];

vector <int> ans[MAX];

void dijkstra(int start){
   d[start] = 0;
   priority_queue<pair<int,int>>pq;
   pq.push({start,0});
   
   while(!pq.empty()){
       int cur = pq.top().first;
       int distance = -pq.top().second;
       pq.pop();
       if(d[cur] < distance) continue;
       for(int i = 0;i<a[cur].size();i++){
           int nxt = a[cur][i].first;
           int nxtDistance = distance + a[cur][i].second;
           if(nxtDistance < d[nxt]){
               d[nxt] = nxtDistance;
               pq.push({nxt, -nxtDistance});
           }
       }
   }
}

int main(){
   cin >> N >> M >> K >> X;
   for(int i = 1;i<=N;i++){
       d[i] = INF;
   }
   for(int i = 1;i<=M;i++){
       int u,v;
       cin >> u >> v;
       a[u].push_back({v,1});
   }

   dijkstra(X);

   int flag = 0;
   for(int i = 1;i<=N;i++){
       if(d[i] == K){
           flag = 1;
           cout << i << "\n";
       }
   }

   if(!flag) cout << "-1\n";
   return 0;
}
