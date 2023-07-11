//#include<bits/stdc++.h>
//using namespace std;
//
//int N = 6;
//int INF = 1e9;
//
//int a[6][6] = {
//    {0,2,5,1,INF,INF},
//    {2,0,3,2,INF,INF},
//    {5,3,0,3,1,5},
//    {1,2,3,0,1,INF},
//    {INF,INF,1,1,0,2},
//    {INF,INF,5,INF,2,0}
//};
//
//int visited[6];
//int d[6]; //최소비용
//
////가장 최소거리 정점 반환
//int getSmallIdx(){
//    int min = INF;
//    int index = 0;
//    for(int i = 0;i<N;i++){
//        if(d[i] < min && !visited[i]){
//            min = d[i];
//            index = i;
//        }
//    }
//    return index;
//}
//
////다익스트라 수행 함수(start에서 i까지)
//void dijkstra(int start){
//    for(int i = 0;i<N;i++){
//        d[i] = a[start][i];
//    }
//    visited[start] = 1;
// //O(N^2)이므로 아래의 힙을 섞어서 구현해야 NlogN
//    for(int i = 0;i<N-2;i++){
//        int cur = getSmallIdx();
//        visited[cur] = 1;
//        for(int j = 0;j<N;j++){
//            if(!visited[j]){
//                if(d[cur] + a[cur][j] < d[j]){
//                    d[j] = d[cur] + a[cur][j];
//                }
//            }
//        }
//    }
//}
//
//int main(){
//    dijkstra(0);
//    for(int i = 0;i<N;i++){
//        cout << d[i] << " ";
//    }
//
//    return 0;
//}

//정점의 갯수만큼 필수적으로 반복해야하기때문에 정점이 1e9개, 간선이 2~3개라면 비효율적임


//#include<bits/stdc++.h>
//using namespace std;
//int N = 6;
//int INF = 1e9;
//
//vector<pair<int, int>>a[7]; //간선 정보
//int d[7]; //비용
//bool visited[7];
//
//
//void dijkstra(int start){
//    d[start] = 0;
//    priority_queue<pair<int,int>>pq; //힙
//
//    pq.push(make_pair(start, 0));
//    while(pq.size()){
//        int cur = pq.top().first;
//        int distance = -pq.top().second; //짧은게 먼저 오도록 음수화
//        pq.pop();
//        if(d[cur] < distance) continue;
//        for(int i = 0;i<a[cur].size();i++){
//            //선택된 노드의 인접노드
//            int next = a[cur][i].first;
//            //선택 노드 거쳐서 인접노드로 가는 비용
//            int nextDistance = distance + a[cur][i].second;
//            //기존 최소비용보다 더 저렴하다면 교체
//            if(nextDistance < d[next]){
//                d[next] = nextDistance;
//                pq.push(make_pair(next, -nextDistance));
//            }
//        }
//    }
//}
//
//int main(){
//    for(int i = 1;i<=N;i++){
//        d[i] = INF;
//    }
//
//    a[1].push_back(make_pair(2, 2));
//    a[1].push_back(make_pair(3, 5));
//    a[1].push_back(make_pair(4, 1));
//
//    a[2].push_back(make_pair(1, 2));
//    a[2].push_back(make_pair(3, 3));
//    a[2].push_back(make_pair(4, 2));
//
//    a[3].push_back(make_pair(1, 5));
//    a[3].push_back(make_pair(2, 3));
//    a[3].push_back(make_pair(4, 3));
//    a[3].push_back(make_pair(5, 1));
//    a[3].push_back(make_pair(6, 5));
//
//    a[4].push_back(make_pair(1, 1));
//    a[4].push_back(make_pair(2, 2));
//    a[4].push_back(make_pair(3, 3));
//    a[4].push_back(make_pair(5, 1));
//
//    a[5].push_back(make_pair(3, 1));
//    a[5].push_back(make_pair(4, 1));
//    a[5].push_back(make_pair(6, 2));
//
//    a[6].push_back(make_pair(3, 5));
//    a[6].push_back(make_pair(5, 2));
//
//    dijkstra(1);
//
//    for(int i = 1;i<=N;i++){
//        cout << d[i] << " ";
//    }
//
//    return 0;
//}
