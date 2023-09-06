#include<bits/stdc++.h>
using namespace std;

const int MAX = 100001;
int N,K;

int a[MAX];
bool visited[MAX];

int c = 0;
int aCnt = 0, bCnt = 0;

void bfs(int a){
   queue<pair<int,int>> q;

   q.push({a,0});
   while(q.size()){
       int x = q.front().first;
       int cnt = q.front().second;
       q.pop();

       if(x == K){
           c = cnt;
           cnt++;
           aCnt++;
       }

       if(x == K && aCnt && cnt == c){
           aCnt = 2;
       }

       if(x + 1 >= 0 && x + 1 < MAX){
           if(!visited[x+1]){
               visited[x+1] = true;
               q.push({x+1,cnt+1});
           }
       }

       if(x-1 >= 0 && x + 1 < MAX){
           if(!visited[x-1]){
               visited[x-1] = true;
               q.push({x-1,cnt + 1});
           }
       }

       if(2*x >= 0 && 2*x < MAX){
           if(!visited[2*x]){
               visited[2*x] = true;
               q.push({2*x, cnt + 1});
           }
       }
   }
}



int main(){
   cin >> N >> K;
   visited[N] = true;
   bfs(N);

   cout << c << "\n" << aCnt;

   return 0;
}


