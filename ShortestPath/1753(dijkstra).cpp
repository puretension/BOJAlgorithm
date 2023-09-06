#include<bits/stdc++.h>
using namespace std;

const int MAX_V = 20001; //최대 VERTEX수
const int MAX_E = 300001; //최대 EDGE수
const int INF = 1e9;
vector<pair<int, int>>a[MAX_E]; //30000까지 간선 가능
int d[MAX_V]; //각 정점에 대한 비용은 20000까지 가능

void dijkstra(int start){
   priority_queue<pair<int,int>> pq; //우선순위 큐 생성
   pq.push(make_pair(start, 0)); //시작노드 to 시작노드 정보 삽입
   d[start] = 0; //시작노드 to 시작노드 비용은 당연히 0

   while(pq.size()){
       int curNode = pq.top().first;
       int curDistance = -pq.top().second; //오름차순으로 가장작은 비용값부터 비교
       pq.pop();
       if(d[curNode] < curDistance) continue; //pq의 top에서의 비용이 더 크면 업데이트 X

       for(int i = 0;i<a[curNode].size();i++){
           int nextNode = a[curNode][i].first;
           int nextDistance = curDistance + a[curNode][i].second;
           if(d[nextNode] > nextDistance){
               d[nextNode] = nextDistance;
               pq.push(make_pair(nextNode, -nextDistance));
           }
       }
   }
}

int main(){
   int V,E,K;
   cin >> V >> E;
   cin >> K;
   for(int i = 1;i<=V;i++){
       d[i] = INF;
   }
   for(int i = 0;i<E;i++){
       int u,v,w;
       cin >> u >> v >> w;
       a[u].push_back(make_pair(v, w));
   }

   dijkstra(K);

   for(int i = 1;i<=V;i++){
       if(d[i] == INF) cout << "INF" << "\n";
       else cout << d[i] << "\n";
   }

   return 0;
}
