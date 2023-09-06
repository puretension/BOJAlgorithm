#include<bits/stdc++.h>
using namespace std;
//시간복잡도: O(N(N+M)logN) 1e8이하이므로 통과

const int MAX_VERTEX = 1001;
const int MAX_EDGE = 10001;
const int INF = 1e9;

vector<pair<int,int>> a[MAX_EDGE];
int d[MAX_VERTEX];

int N,M,X;

void dijkstra(int start){
   for(int i = 1;i<=N;i++){
       d[i] = INF;
   }
   d[start] = 0;
   priority_queue<pair<int,int>> pq;
   pq.push(make_pair(start, 0));

   while(pq.size()){
       int cur = pq.top().first;
       int distance = -pq.top().second;
       pq.pop();
       if(d[cur] < distance) continue;
       for(int i = 0;i<a[cur].size();i++){
           int next = a[cur][i].first;
           int nextDistance = distance + a[cur][i].second;
           if(d[next] > nextDistance){
               d[next] = nextDistance;
               pq.push(make_pair(next, -nextDistance));
           }
       }
   }
}

int main(){
   ios_base :: sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   
   cin >> N >> M >> X;
   for(int i = 1;i<=N;i++){
       d[i] = INF;
   }

   for(int i = 0;i<M;i++){
       int u,v,c;
       cin >> u >> v >> c;
       a[u].push_back(make_pair(v, c));
   }

   

   dijkstra(X);
   
   int time[MAX_VERTEX];

   for(int i = 1;i<=N;i++){
       if(i == X) continue;
       time[i] = d[i];
   }
   
   for(int i = 1;i<=N;i++){
       if(i == X) continue;
       dijkstra(i);
       time[i] += d[X];
   }
 
   int maxT = 0;
   for(int i = 1;i<=N;i++){
       if(maxT < time[i]) maxT = time[i];
   }
 
   cout << maxT << "\n";
   
}

