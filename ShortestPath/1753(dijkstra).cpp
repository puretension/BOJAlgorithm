//정답풀이 2개 + 오답풀이 1개 
#include <iostream>
#include <vector>
#include <queue>

#define INF 1000000 // 시작 노드에서 해당 노드까지의 경로가 없는 경우의 비용
#define MAX_VERTEX 20001 // 최대 vertex 개수
#define MAX_EDGE 300001 // 최대 edge 개수

using namespace std;

// 최소 비용 배열
int d[MAX_VERTEX];

// 간선 정보를 담은 Vector 생성
// index : 시작 노드
// value : pair<비용, 도착 노드> 목록
vector<pair<int, int> > edge[MAX_EDGE];

void dijkstra(int start_node){

    // 시작 노드에서 시작 노드로 가는 비용은 0
    d[start_node] = 0;

    // 시작 노드부터 어떤 도착 노드까지의 최소 비용을 제시하는 간선 목록이며,
    // pair<비용, 도착 노드> 형식의 우선 순위 큐이다.
    priority_queue<pair<int, int> > pq;

    // 시작 노드에서 시작 노드로 가는 경로와 비용을 pq 에 삽입
    pq.push(make_pair(0, start_node));

    // pq 의 모든 경로들을 확인할 때까지 반복
    while(!pq.empty()){

        // 기존의 우선 순위 큐는, 첫 번째 값을 기준으로 큰 값이 top 에 오도록 정렬되어있다.
        // 하지만, 해당 알고리즘에선, 비용 값을 음수화 한 뒤 첫 번째 값으로 삽입하고, 도착 노드는 두 번째 값으로 삽입한다.
        // 따라서, 비용이 가장 작은 값이 top 에 오도록 정렬되어있다.
        // 즉, 가장 최소 비용을 주장하는 경로부터 확인하게 된다.

        // 시작 노드에서 어떤 도착 노드까지의 최소 경로를 주장하는 pq 의 top 에서,
        // 도착 노드를 현재 노드로 설정한다.
        int current = pq.top().second;

        // 시작 노드에서 현재 노드까지의 비용을 설정한다.
        // 비용은 음수화되어있는 상태이므로, 양수화해서 사용한다.
        int start_to_current_distance = -pq.top().first;

        // 현재 경로는 확인 되었으므로, 우선 순위 큐에서 제거한다.
        pq.pop();

        // pq 의 top 에서 뽑은, 시작 노드부터 현재 노드까지의 비용과
        // 최소 비용 배열에 있는, 시작 노드부터 현재 노드까지의 비용을 비교함으로써,
        // pq 의 top 에서 뽑은, 시작 노드부터 현재 노드까지의 비용이 더 크면
        // 굳이 해당 경로를 통해 인접한 노드들을 확인할 필요가 없으므로, 더 이상 확인하지 않음
        if (d[current] < start_to_current_distance){
            continue;
        }

        // 상단 조건문에 걸리지 않고 통과하면,
        // 시작 노드부터 현재 노드까지는 최소 비용으로 이루어진 상태이므로, 
        // 이제 현재 노드와 연결된 노드들을 모두 검사한다.
        for (int i=0; i<edge[current].size(); ++i){

            // 다음 노드 설정
            // 즉, 현재 노드와 i 번째로 인접한 노드
            int next = edge[current][i].second;

            // 시작 노드에서 다음 노드까지의 비용 설정
            // 즉, 시작 노드에서 현재 노드까지의 비용 + 현재 노드에서 i 번째로 인접한 노드까지의 비용
            int start_to_next_distance = start_to_current_distance + edge[current][i].first;

            // 기존의, 시작 노드에서 다음 노드까지의 최소 비용보다
            // 새롭게 계산한, 시작 노드에서 다음 노드까지의 비용이 더 작다면
            // 최소 비용을 업데이트
            if (d[next] > start_to_next_distance){
                d[next] = start_to_next_distance;

                // 이제, 갱신된 경로가 최소 비용임을 주장하기 위해
                // 우선 순위 큐에 해당 경로 삽입
                pq.push(make_pair(-start_to_next_distance, next));
            }
        }
    }
}

int main(){

    // 노드의 개수와 간선의 개수 입력
    int v, e;
    cin >> v >> e;

    // 시작 노드 입력
    int start_node;
    cin >> start_node;

    // 최소 비용 배열 초기화
    for (int i=1; i<v+1; ++i){
        d[i] = INF;
    }

    // 간선 저장
    for (int i=0; i<e; ++i){

        // 시작 노드, 도착 노드, 비용 입력
        int start, end, cost;
        cin >> start >> end >> cost;

        // 시작 노드에 따른 <비용, 도착 노드> 저장
        edge[start].push_back(make_pair(cost, end));
    }

    // 다익스트라 함수 실행
    dijkstra(start_node);

    // 최소 비용 배열 출력
    for (int i=1; i<v+1; ++i){
        if (d[i] == INF){
            cout << "INF" << " ";    
        }
        else{
            cout << d[i] << " ";
        }
    }

    return 0;

}

// #include <stdio.h>
// #include <vector>
// #include <queue>
// #define INF 997777666
// using namespace std;

// vector<pair<int,int> > node[20001];
// priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >pq;
// int value[20001];

// int main(){
//     int n,e,k;
//     int u,v,w;
    
//     scanf("%d %d",&n,&e);
//     scanf("%d",&k);
    
//     for(int i=0;i<e;i++){
//         scanf("%d %d %d",&u,&v,&w);
//         node[u].push_back(make_pair(v,w));
//     }
    
//     for(int i=1;i<=n;i++)
//         value[i] = INF;
    
//     value[k] = 0;
    
//     pq.push(make_pair(0,k));
    
//     while(!pq.empty()){
//         int s = pq.top().first;
//         int e = pq.top().second;
//         pq.pop();
        
//         for(int i=0;i<node[e].size();i++){
//             int V = node[e][i].first;
//             int W = node[e][i].second;
            
//             if(s+W<value[V]){
//                 value[V] = s+W;
//                 pq.push(make_pair(s+W,V));
//             }
//         }
//     }
    
//     for(int i=1;i<=n;i++)
//         if(value[i]==INF) printf("INF\n");
//         else printf("%d\n",value[i]);
    
//     return 0;
// }


// 시간초과 풀이 
// #include<bits/stdc++.h>
// using namespace std;

// const int MAX_V = 20001; //최대 VERTEX수
// const int MAX_E = 300001; //최대 EDGE수
// const int INF = 1e9;
// vector<pair<int, int>>a[MAX_E]; //30000까지 간선 가능
// int d[MAX_V]; //각 정점에 대한 비용은 20000까지 가능

// void dijkstra(int start){
//    priority_queue<pair<int,int>> pq; //우선순위 큐 생성
//    pq.push(make_pair(start, 0)); //시작노드 to 시작노드 정보 삽입
//    d[start] = 0; //시작노드 to 시작노드 비용은 당연히 0

//    while(pq.size()){
//        int curNode = pq.top().first;
//        int curDistance = -pq.top().second; //오름차순으로 가장작은 비용값부터 비교
//        pq.pop();
//        if(d[curNode] < curDistance) continue; //pq의 top에서의 비용이 더 크면 업데이트 X

//        for(int i = 0;i<a[curNode].size();i++){
//            int nextNode = a[curNode][i].first;
//            int nextDistance = curDistance + a[curNode][i].second;
//            if(d[nextNode] > nextDistance){
//                d[nextNode] = nextDistance;
//                pq.push(make_pair(nextNode, -nextDistance));
//            }
//        }
//    }
// }

// int main(){
//    int V,E,K;
//    cin >> V >> E;
//    cin >> K;
//    for(int i = 1;i<=V;i++){
//        d[i] = INF;
//    }
//    for(int i = 0;i<E;i++){
//        int u,v,w;
//        cin >> u >> v >> w;
//        a[u].push_back(make_pair(v, w));
//    }

//    dijkstra(K);

//    for(int i = 1;i<=V;i++){
//        if(d[i] == INF) cout << "INF" << "\n";
//        else cout << d[i] << "\n";
//    }

//    return 0;
// }
